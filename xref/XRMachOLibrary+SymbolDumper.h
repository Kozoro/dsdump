//
//  XRMachOLibrary+SymbolDumper.h
//  xref
//
//  Created by Derek Selander on 4/22/19.
//  Copyright © 2019 Selander. All rights reserved.
//

//#ifdef __cplusplus
//extern "C" {
//#endif
    
#import "XRMachOLibrary.h"
    
NS_ASSUME_NONNULL_BEGIN


@interface XRMachOLibrary (SymbolDumper)

- (void)dumpSymbols;
- (void)dumpExternalSymbols;
- (XRBindSymbol *)objCSuperClassFromSymbol:(struct nlist_64 * _Nonnull)sym;

@end

OS_ALWAYS_INLINE
void print_symbol(XRMachOLibrary *object, struct nlist_64 * _Nonnull sym, uintptr_t * _Nullable override_addr);
    
NS_ASSUME_NONNULL_END
    
//#ifdef __cplusplus
//} // extern c
//#endif

#define OBJC_CLASS_LENGTH (strlen("_OBJC_CLASS_$_"))



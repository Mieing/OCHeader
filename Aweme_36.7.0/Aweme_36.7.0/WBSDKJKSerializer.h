@interface WBSDKJKSerializer : NSObject {
    struct WBSDKJKEncodeState { struct WBSDKJKManagedBuffer { struct WBSDKJKPtrRange { char *x0; unsigned long long x1; } x0; unsigned long long x1; unsigned long long x2; } x0; struct WBSDKJKManagedBuffer { struct WBSDKJKPtrRange { char *x0; unsigned long long x1; } x0; unsigned long long x1; unsigned long long x2; } x1; unsigned long long x2; struct WBSDKJKFastClassLookup { void *x0; void *x1; void *x2; void *x3; void *x4; } x3; struct WBSDKJKEncodeCache { id x0; unsigned long long x1; unsigned long long x2; } x4[1024]; unsigned long long x5; unsigned long long x6; unsigned long long x7; id x8; id x9; SEL x10; void /* function */ *x11; id /* block */ x12; } *encodeState;
}

+ (id)serializeObject:(id)a0 options:(unsigned long long)a1 encodeOption:(unsigned long long)a2 block:(id /* block */)a3 delegate:(id)a4 selector:(SEL)a5 error:(id *)a6;

- (id)serializeObject:(id)a0 options:(unsigned long long)a1 encodeOption:(unsigned long long)a2 block:(id /* block */)a3 delegate:(id)a4 selector:(SEL)a5 error:(id *)a6;
- (void)releaseState;
- (void)dealloc;

@end

@interface WBSDKJSONDecoder : NSObject {
    struct WBSDKJKParseState { unsigned long long x0; struct WBSDKJKConstBuffer { struct WBSDKJKConstPtrRange { char *x0; unsigned long long x1; } x0; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct WBSDKJKParseToken { struct WBSDKJKConstPtrRange { char *x0; unsigned long long x1; } x0; unsigned long long x1; struct WBSDKJKTokenValue { struct WBSDKJKConstPtrRange { char *x0; unsigned long long x1; } x0; unsigned long long x1; unsigned long long x2; union { long long x0; unsigned long long x1; double x2; } x3; struct WBSDKJKTokenCacheItem *x4; } x2; struct WBSDKJKManagedBuffer { struct WBSDKJKPtrRange { char *x0; unsigned long long x1; } x0; unsigned long long x1; unsigned long long x2; } x3; } x8; struct WBSDKJKObjectStack { void **x0; void **x1; unsigned long long *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } x9; struct WBSDKJKTokenCache { struct WBSDKJKTokenCacheItem *x0; unsigned long long x1; unsigned int x2; unsigned char x3[1024]; } x10; struct WBSDKJKObjCImpCache { Class x0; void /* function */ *x1; void /* function */ *x2; } x11; id x12; int x13; BOOL x14; } *parseState;
}

+ (id)decoderWithParseOptions:(unsigned long long)a0;
+ (id)decoder;

- (id)initWithParseOptions:(unsigned long long)a0;
- (id)objectWithUTF8String:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)mutableObjectWithUTF8String:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)parseUTF8String:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)parseWBSDKJSONData:(id)a0;
- (id)parseWBSDKJSONData:(id)a0 error:(id *)a1;
- (id)objectWithUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (id)mutableObjectWithUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (id)mutableObjectWithData:(id)a0 error:(id *)a1;
- (id)objectWithData:(id)a0;
- (id)init;
- (id)objectWithData:(id)a0 error:(id *)a1;
- (void)clearCache;
- (id)mutableObjectWithData:(id)a0;
- (void)dealloc;
- (id)parseUTF8String:(const char *)a0 length:(unsigned long long)a1;

@end

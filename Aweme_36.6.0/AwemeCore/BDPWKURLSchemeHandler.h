@class NSString, NSHashTable;

@interface BDPWKURLSchemeHandler : NSObject <WKURLSchemeHandler>

@property (retain, nonatomic) NSHashTable *hashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_enableOptimize;
- (BOOL)isHeicFile:(id)a0;
- (void)handleResponseWithTask:(id)a0 data:(id)a1 ofURLInfo:(id)a2 withError:(id)a3;
- (void).cxx_destruct;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (id)init;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;

@end

@class CSJWKWebViewClient;

@interface CSJWebViewOwner : NSObject

@property (retain, nonatomic) CSJWKWebViewClient *webViewClient;
@property (nonatomic) BOOL isCache;

- (id)initWithWebViewClient:(id)a0 isCache:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end

@class NSString, MMWebViewController;

@interface GCWebViewCacheItem : NSObject

@property (retain, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) double preloadTime;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) MMWebViewController *webviewController;
@property (nonatomic) BOOL reCreateAfterUsed;

- (void)configureWithUrl:(id)a0;
- (BOOL)isExpired;
- (void).cxx_destruct;

@end

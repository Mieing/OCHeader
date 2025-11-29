@class NSString, MMWebViewController;

@interface WCFinderWebViewOpener : NSObject

@property (nonatomic) unsigned long long preloadKey;
@property (nonatomic) BOOL needPreload;
@property (retain, nonatomic) NSString *targetURL;
@property (nonatomic) BOOL reReploadWhenExit;
@property (retain, nonatomic) MMWebViewController *cacheWebView;
@property (copy, nonatomic) id /* block */ configPresetUI;
@property (copy, nonatomic) id /* block */ appendQuerys;

+ (id)openerWithNeedPreload:(BOOL)a0 reReploadWhenExit:(BOOL)a1;

- (void)updateURL:(id)a0;
- (void)open:(id)a0;
- (id)_createWebView;
- (void).cxx_destruct;

@end

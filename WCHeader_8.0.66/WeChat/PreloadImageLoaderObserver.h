@class NSString, NSMutableArray, LiteAppStore;

@interface PreloadImageLoaderObserver : NSObject <MMImageLoaderObserver> {
    NSMutableArray *_preloadImages;
    LiteAppStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreloadImages:(id)a0 store:(id)a1;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)OnImageLoad:(id)a0 success:(BOOL)a1;
- (void).cxx_destruct;

@end

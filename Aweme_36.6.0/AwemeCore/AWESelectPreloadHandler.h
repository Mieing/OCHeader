@class NSString, AWESelectPreloadConfig;
@protocol AWESelectPreloadHandlerDelegate;

@interface AWESelectPreloadHandler : NSObject <AWESelectPreloadHandlerProtocol>

@property (copy, nonatomic) NSString *preloadScene;
@property (retain, nonatomic) AWESelectPreloadConfig *preloadConfig;
@property (weak, nonatomic) id<AWESelectPreloadHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerWithPreloadScene:(id)a0 preloadSize:(id)a1 banPreload:(BOOL)a2 delegate:(id)a3;
+ (id)handlerWithPreloadScene:(id)a0 preloadConfig:(id)a1;

- (void)cancelPreload;
- (void)selectItemAtIndexPath:(id)a0 referString:(id)a1;
- (void)preloadDataWithModel:(id)a0 completion:(id /* block */)a1;
- (long long)videoPreloadSize;
- (id)initWithPreloadScene:(id)a0 preloadConfig:(id)a1;
- (void).cxx_destruct;

@end

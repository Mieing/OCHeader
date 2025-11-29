@class NSString;

@interface LiteAppJsApiGetThemeColorForImage : LiteAppJsApi <MMImageLoaderObserver> {
    BOOL _hasCallback;
    NSString *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onLoadImage:(id)a0;
- (void)dealloc;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, NSMutableDictionary;

@interface WSWebViewPlugin_NativeVideo : WSWebViewPlugin_NativeView <WSWebNativeVideoPlayerLogicDelegate>

@property (retain, nonatomic) NSMutableDictionary *localFinderDataItemDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)pluginKey;
- (BOOL)insertVideoPlayerView:(id)a0 withError:(id *)a1;
- (void)updatevideoPlayerView:(id)a0 withParams:(id)a1 andBlock:(id /* block */)a2;
- (void)updateVideoPlayerView:(unsigned int)a0 withParams:(id)a1 andBlock:(id /* block */)a2;
- (BOOL)removeVideoPlayerView:(unsigned int)a0 withError:(id *)a1;
- (BOOL)operateVideoPlayerView:(unsigned int)a0 withParams:(id)a1 andError:(id *)a2;
- (void)exchangeFinderData:(id)a0 withBlock:(id /* block */)a1;
- (id)genComposedFeedIdFromExportId:(id)a0 andNonceId:(id)a1;
- (id)genVideoPlayerViewWithViewId:(unsigned int)a0;
- (id)getVideoPlayerView:(unsigned int)a0 withError:(id *)a1;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)onVideoPlayerEvent:(id)a0 withData:(id)a1 forViewId:(unsigned int)a2;
- (void).cxx_destruct;

@end

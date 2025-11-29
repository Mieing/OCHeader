@class CGXViewController, NSMutableDictionary, NSString;
@protocol CGXCloudPlayerDelegate;

@interface CGXCloudPlayerControllerNativeWrapper : NSObject <CGXCloudPlayerDelegate, CGXCloudPlayerSubModuleProtocol> {
    void *nativeController_;
}

@property (nonatomic) long long renderMode;
@property (retain, nonatomic) CGXViewController *viewController;
@property (retain, nonatomic) NSMutableDictionary *mSubModules;
@property (weak, nonatomic) id<CGXCloudPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createSubModule:(long long)a0;
- (void)destroySubModule:(id)a0;
- (void)sendTouchEvents:(id)a0;
- (void)setRenderViewInternal;
- (void)onPlayerEvent:(long long)a0 value:(id)a1;
- (void)onPlayerStateChange:(long long)a0 current:(long long)a1;
- (id)initInstanceParams:(id)a0 instanceResponse:(id)a1;
- (id)getModuleOfType:(long long)a0 expectedClass:(Class)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)destroy;
- (void)resume;

@end

@class NSString;

@interface AWELiveSmallWindowService : NSObject <AWELiveSmallWindowProtocol>

@property (nonatomic) BOOL selfManage;
@property (nonatomic) BOOL useTapActionOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLivePipShow;
- (void)showSmallLiveWindowFrom:(id)a0;
- (void)hideSmallLiveWindow;
- (void)registerAllowListVCClass:(Class)a0 withTag:(id)a1;
- (void)unregisterAllowListVCClass:(Class)a0;
- (void)setSmallWindowHiddenCompletion:(id /* block */)a0;
- (void)setTapSmallWindowAction:(id /* block */)a0;
- (void)setTapSmallWindowAction:(id /* block */)a0 liveResponse:(BOOL)a1;
- (void)setSmallWindowMuteStateDidChangedAction:(id /* block */)a0;
- (BOOL)hasWindowView;
- (void)resumeSmallWindowStream;
- (void)startVideoRendering;
- (void)pauseSmallWindowStream;
- (void)startSmallWindowFullScreenAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)enqueueSmallWindowPlayerForReuse:(BOOL)a0;
- (void)showSmallLiveWindowFrom:(id)a0 extraParam:(id)a1 preferOptions:(id)a2 callTrace:(id)a3 completion:(id /* block */)a4;
- (void)showSmallLiveWindowFrom:(id)a0 withRoomID:(id)a1 metaParams:(id)a2 preferOptions:(id)a3 callTrace:(id)a4 completion:(id /* block */)a5;
- (void)transferSmallLiveToView:(id)a0;
- (void)returnSmallLiveToService;
- (void)setSmallWindowMute:(BOOL)a0;
- (void)clearSmallWindowActionBlock;
- (void)resumeMiniWindow;
- (void)stopVideoRendering;
- (void)setSmallLiveWindowTop:(double)a0;
- (id)smallWindowService;
- (void)registerPreferenceOptionsModel:(id)a0 bizTag:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSmallWindowViewRect;
- (void)pauseMiniWindow;
- (BOOL)didHideWindow;

@end

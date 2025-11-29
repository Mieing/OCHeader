@class NSString;

@interface IESLiveGameCPSmallWindowServiceImpl : NSObject <IESGCPLiveSmallWindowService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mute:(BOOL)a0;
- (void)hideSmallLiveWindow;
- (void)registerAllowListVCClass:(Class)a0 withTag:(id)a1;
- (void)unregisterAllowListVCClass:(Class)a0;
- (void)setTapSmallWindowAction:(id /* block */)a0;
- (void)setSmallWindowMuteStateDidChangedAction:(id /* block */)a0;
- (void)setSelfManage:(BOOL)a0;
- (void)transferSmallLiveToView:(id)a0;
- (void)setSmallWindowHiddenCallback:(id /* block */)a0;
- (void)setSmallWindowTop:(double)a0;
- (void)showFromVC:(id)a0;
- (void)showSmallLiveWindowFrom:(id)a0 extraParam:(id)a1 preferOptions:(id)a2;
- (BOOL)manualHideSmallWindow;
- (void)switchResolution:(id)a0 completion:(id /* block */)a1;
- (void)restoreResolution:(id)a0 completion:(id /* block */)a1;
- (void)hide;
- (BOOL)isShowing;

@end

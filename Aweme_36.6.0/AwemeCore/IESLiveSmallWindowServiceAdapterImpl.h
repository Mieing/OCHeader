@class NSString;

@interface IESLiveSmallWindowServiceAdapterImpl : IESLiveBaseAdapter <IESLiveSmallWindowServiceAdapter>

@property (nonatomic) BOOL selfManage;
@property (readonly, nonatomic) BOOL manualHideSmallWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showSmallLiveWindowFrom:(id)a0;
- (void)hideSmallLiveWindow;
- (void)registerAllowListVCClass:(Class)a0 withTag:(id)a1;
- (void)unregisterAllowListVCClass:(Class)a0;
- (void)setSmallWindowHiddenCompletion:(id /* block */)a0;
- (void)setTapSmallWindowAction:(id /* block */)a0;
- (void)setSmallWindowMuteStateDidChangedAction:(id /* block */)a0;
- (BOOL)hasWindowView;
- (void)transferSmallLiveToView:(id)a0;
- (void)setSmallWindowMute:(BOOL)a0;
- (void)setSmallWindowTop:(double)a0;
- (void)showSmallLiveWindowFrom:(id)a0 extraParam:(id)a1 preferOptions:(id)a2;
- (void)hideSmallWindow;
- (void)switchResolution:(id)a0 complete:(id /* block */)a1;

@end

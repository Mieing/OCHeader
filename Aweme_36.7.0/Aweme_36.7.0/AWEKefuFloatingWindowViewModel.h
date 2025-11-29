@class AWEKefuFloatingWindowView, AWEKefuFloatingWindowBaseStateConfig, NSDictionary, AWEKefuFloatingWindowBaseController, AWEKefuFloatingWindowConfig, NSString;
@protocol AWEKefuFloatingWindowViewModelDelegate;

@interface AWEKefuFloatingWindowViewModel : NSObject <AWEKefuFloatingWindowViewDelegate, AWEKefuFloatingWindowControllerProtocol, AWERRTVRoomVolumeListener, AWEKefuFloatingWindowViewModelProtocol>

@property (retain, nonatomic) AWEKefuFloatingWindowConfig *config;
@property (retain, nonatomic) AWEKefuFloatingWindowBaseStateConfig *stateConfig;
@property (retain, nonatomic) AWEKefuFloatingWindowView *floatingWindowView;
@property (retain, nonatomic) NSDictionary *stateConfigToControllerClassMap;
@property (retain, nonatomic) AWEKefuFloatingWindowBaseController *activeController;
@property (weak, nonatomic) id<AWEKefuFloatingWindowViewModelDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *roomId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controller:(id)a0 addInfoView:(id)a1;
- (void)controller:(id)a0 removeInfoView:(id)a1;
- (void)controller:(id)a0 updateAvatar:(id)a1;
- (BOOL)closeWithConfig:(id)a0;
- (BOOL)changeWithConfig:(id)a0;
- (void)updateDragDeleteText:(id)a0;
- (void)floatingWindowViewDidDragHideAvatar:(id)a0;
- (void)floatingWindowViewDidClickAvatar:(id)a0;
- (void)floatingWindowView:(id)a0 didChangeExpandState:(BOOL)a1;
- (void)registerRoomVolumeListenerIfNeeded;
- (void)onAWERTVDidFinishNotification:(id)a0;
- (void)unregisterRoomVolumeListenerIfNeeded;
- (id)createWindowControllerWithStateConfig:(id)a0;
- (void)p_tryUpdateVolume:(long long)a0;
- (void)onVolumeChangeWith:(BOOL)a0 linearVolume:(long long)a1 nonlinearVolume:(long long)a2 vad:(long long)a3;
- (struct CGPoint { double x0; double x1; })getCurrentPosition;
- (void).cxx_destruct;
- (BOOL)hide;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (BOOL)show;
- (void)updateDelegate:(id)a0;

@end

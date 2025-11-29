@class UIView, UILongPressGestureRecognizer, NSString, BDPUniqueID, NSMutableDictionary, NSDictionary, UIButton, NSObject;
@protocol BDPBridgeInstanceProtocol;

@interface BDPPluginLiveMediaControlButton : BDPBridgeInstancePlugin <BDPInteractMessageHandleProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIButton *micButton;
@property (retain, nonatomic) UIView *micContainer;
@property (retain, nonatomic) UIButton *cameraButton;
@property (retain, nonatomic) UIView *cameraContainer;
@property (retain, nonatomic) NSDictionary *micStyle;
@property (retain, nonatomic) NSDictionary *cameraStyle;
@property (nonatomic) BOOL isListening;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress;
@property (weak, nonatomic) NSObject<BDPBridgeInstanceProtocol> *instance;
@property (retain, nonatomic) NSMutableDictionary *viewDict;
@property (retain, nonatomic) NSMutableDictionary *btnStyleDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addListener;
- (void)didReceivedEvent:(id)a0 data:(id)a1;
- (void)switchToButton:(id)a0 inCanvasView:(id)a1 withAnimation:(id)a2;
- (void)onClickInteractiveButton:(id)a0;
- (void)createInteractiveButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateInteractiveButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)buildMicButtonWithParam:(id)a0 btnId:(long long)a1 state:(long long)a2;
- (id)buildCameraButtonWithParam:(id)a0 btnId:(long long)a1 state:(long long)a2;
- (void)adjustFrameWithType:(unsigned long long)a0 superView:(id)a1;
- (void)queryMediaStateWithType:(unsigned long long)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkPermissionAndRequestWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)queryPermissionAndRequestWithType:(id)a0;
- (id)buildLiveButtonWithStyle:(id)a0 btnId:(long long)a1;
- (void)didReceiveMicTouchStart;
- (void)didReceiveMicTouchEnd;
- (void)operateMediaStateWithType:(unsigned long long)a0 operate:(unsigned long long)a1 callback:(id /* block */)a2 instance:(id)a3;
- (id)buildButtonWithStyle:(id)a0;
- (void)configMediaButtonBgStyle:(id)a0 forBtn:(id)a1;
- (id)buildAttrStrWithText:(id)a0 style:(id)a1;
- (void)didReceiveMicClick;
- (void)didReceiveCameraClick;
- (void)loadImageWithPath:(id)a0 forButton:(id)a1 isBg:(BOOL)a2;
- (void)sendEventWithParam:(id)a0;
- (void)callLiveMethod:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createLiveInteractiveButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateLiveInteractiveButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)handleUserActionResult:(unsigned long long)a0 operate:(unsigned long long)a1 result:(id)a2 error:(id)a3;
- (void)longPressAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

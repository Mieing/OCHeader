@class DUXButton, NSString;
@protocol AWEIMVideoRedpacketManager;

@interface AWEPlayInteractionLeftFansRedpacketElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) DUXButton *redpacketBtn;
@property (nonatomic) long long rpReceiveCondition;
@property (nonatomic) BOOL isOpenedRedpacket;
@property (retain, nonatomic) id<AWEIMVideoRedpacketManager> redpacketManager;
@property (readonly, copy, nonatomic) NSString *showStyleABValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEYAPManagerCommonAdapterClass;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)p_stopLoading;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (id)aAWEYAPManagerCommonAdapter;
- (void)diggWithNotification:(id)a0;
- (BOOL)shouldShowRedpacketButtonWithModel:(id)a0;
- (BOOL)p_checkAuthorIsSelf;
- (void)updateOpenStatus:(long long)a0 title:(id)a1;
- (void)p_showRedPacketButton:(id)a0;
- (void)p_btnBouncesShowAnimateWithDelay:(double)a0 completion:(id /* block */)a1;
- (void)p_btnShowAnimate;
- (void)p_btnColorAnimateWithDelay:(double)a0 color:(id)a1;
- (void)p_startLoading;
- (void)openRedpacket;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;

@end

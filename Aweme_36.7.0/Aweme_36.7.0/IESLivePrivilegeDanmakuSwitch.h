@class UIControl, NSString, UIImageView, IESLivePrivilegeDanmakuSwitchViewModel;
@protocol IESLiveRoomService;

@interface IESLivePrivilegeDanmakuSwitch : UIView <IESLivePrivilegeDanmakuSwitchProtocol>

@property (retain, nonatomic) UIControl *switchBgView;
@property (retain, nonatomic) UIImageView *switchIcon;
@property (nonatomic) BOOL switchOn;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSwitchViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (copy, nonatomic) id /* block */ didOpen;
@property (copy, nonatomic) id /* block */ didClose;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomModel:(id)a0;
- (void)bindWithViewModel:(id)a0;
- (void)p_updateSwitch;
- (void)p_addLoadingAnimation;
- (void)barrageSwitchChanged;
- (void)p_setupUI;
- (void).cxx_destruct;

@end

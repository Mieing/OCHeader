@class UIImageView, UILabel, UIView;
@protocol IESIMSettingSwitchProtocol;

@interface AWEIMAutoSyncChatBgPopupView : AWEIMBasePopupView

@property (retain, nonatomic) UIImageView *logoImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UILabel *activeTipsLabel;
@property (copy, nonatomic) id /* block */ switchBtnChangedActions;
@property (retain, nonatomic) UIView<IESIMSettingSwitchProtocol> *activeTipsSwitch;

- (void)switchControlDidChanged:(id)a0;
- (void)p_createPopupView;
- (void)showGuideWithDefaultSwitchState:(BOOL)a0;
- (void).cxx_destruct;

@end

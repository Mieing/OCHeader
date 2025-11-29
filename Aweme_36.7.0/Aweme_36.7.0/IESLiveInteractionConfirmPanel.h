@class UIButton, IESLiveInteractionConfirmPanelViewModel, UIImageView, NSTimer, IESLivePopupItem, UILabel, UIView;
@protocol IESLiveSubscription;

@interface IESLiveInteractionConfirmPanel : NSObject

@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *bgMask;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *cameraIconView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *informedButton;
@property (retain, nonatomic) UIView *bottomHSeparatorLine;
@property (retain, nonatomic) UIView *bottomVSeparatorLine;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) IESLiveInteractionConfirmPanelViewModel *model;
@property (nonatomic) BOOL isUserDismiss;

+ (id)panelWithViewModel:(id)a0 diContext:(id)a1;

- (id)attachingDIContext;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (id)startCountingDown;
- (void)updateButtonTitleWithSec:(long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (double)bottomMargin;
- (void)show;
- (void)setupUI;
- (double)containerHeight;
- (void)setupListener;

@end

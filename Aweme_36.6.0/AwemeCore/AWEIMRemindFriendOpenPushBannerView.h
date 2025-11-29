@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIMRemindFriendOpenPushBannerView : UIView

@property (retain, nonatomic) UIView *topBoxView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *sureButton;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) BOOL hasBackgroundImage;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ remindAction;

+ (Class)aAWEIMModuleConfigAdapterProtocolClass;

- (void)p_onClickCancel;
- (void)p_onClickConfirm;
- (id)aAWEIMModuleConfigAdapterProtocol;
- (void)updateUIWithBackgroundImage:(BOOL)a0;
- (void)p_layoutView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

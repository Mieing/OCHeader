@class UIView, NSString, AWEVCDNextActionButton, AWEVCDAlertModel, TTTAttributedLabel, CAGradientLayer, UIButton, AWEVCDUILabel, UILabel, UIScrollView;
@protocol AWEAuthorizeViewDelegate;

@interface AWEAuthorizeLiveAlertView : UIView <TTTAttributedLabelDelegate, AWEAuthorizeAlertViewProtocol>

@property (retain, nonatomic) AWEVCDAlertModel *model;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIScrollView *textView;
@property (retain, nonatomic) AWEVCDUILabel *textLabel;
@property (retain, nonatomic) TTTAttributedLabel *linkTextView;
@property (retain, nonatomic) UIView *bottomBlurView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIButton *nextTimeButton;
@property (retain, nonatomic) AWEVCDNextActionButton *agreeButton;
@property (weak, nonatomic) id<AWEAuthorizeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)agreeAction;
- (void)nextTimeAction;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (void)setupUI;

@end

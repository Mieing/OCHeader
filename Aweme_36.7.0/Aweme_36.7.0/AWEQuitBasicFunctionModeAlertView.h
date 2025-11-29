@class NSString, TTTAttributedLabel, AWEUIButton, UILabel, UIView, UIScrollView;

@interface AWEQuitBasicFunctionModeAlertView : UIView <AWEBasicModeMessage, TTTAttributedLabelDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TTTAttributedLabel *textLabel;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIScrollView *textView;
@property (retain, nonatomic) AWEUIButton *agreeButton;
@property (retain, nonatomic) AWEUIButton *disagreeButton;
@property (nonatomic) BOOL haveQuitEntrance;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEMainModuleCommonAdapterClass;
+ (Class)aAWEPrivacyAlertAdapterClass;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (id)aAWEPadModuleAdapter;
- (void)agreeButtonClicked;
- (void)disagreeButtonClicked;
- (void)showAlertWithConfirm:(id /* block */)a0 cancel:(id /* block */)a1;
- (id)aAWEMainModuleCommonAdapter;
- (id)initHaveQuitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldAdaptPad;
- (id)aAWEPrivacyAlertAdapter;
- (void)disagreeButtonAndQuitClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)dismissViewWithCompletion:(id /* block */)a0;
- (void)p_commonInit;

@end

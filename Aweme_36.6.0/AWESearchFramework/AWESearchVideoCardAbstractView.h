@class AWEModernFeedContentView, NSString, UIImageView, UILabel, UIView, UIScrollView;

@interface AWESearchVideoCardAbstractView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *text;
@property (retain, nonatomic) UIImageView *closeBtn;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEModernFeedContentView *contentAbstractView;
@property (retain, nonatomic) UIImageView *footerIcon;
@property (retain, nonatomic) UILabel *footerText;
@property (nonatomic) double proposeHeight;
@property (copy, nonatomic) id /* block */ closeViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithTheme:(long long)a0;
- (void)configWithFrame:(id)a0;
- (void)setupGes;
- (void)backgroundTapAction;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

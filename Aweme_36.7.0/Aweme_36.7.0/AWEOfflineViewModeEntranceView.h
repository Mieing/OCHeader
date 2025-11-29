@class NSString, UIImageView, DUXDivider, UILabel, UIView;

@interface AWEOfflineViewModeEntranceView : UICollectionReusableView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) DUXDivider *devider;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *cleanLabel;
@property (nonatomic) BOOL shouldHideRecommendView;
@property (copy, nonatomic) id /* block */ clickAction;
@property (nonatomic) BOOL shouldHideCleanButton;
@property (nonatomic) BOOL shouldShowCountLabel;
@property (copy, nonatomic) NSString *textLabelText;
@property (copy, nonatomic) NSString *countLabelText;

- (void)cleanLabelTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)click;

@end

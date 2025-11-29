@class UIImageView, MMBadgeView, UILabel, NSMutableArray;

@interface TextStateFriendTopicButton : MMUIButton

@property (nonatomic) long long buttonStyle;
@property (retain, nonatomic) NSMutableArray *headImageViews;
@property (retain, nonatomic) UIImageView *textStateIconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MMBadgeView *reddotView;
@property (nonatomic) unsigned int notifiesCount;
@property (nonatomic) BOOL hasSmallReddot;

+ (id)defaultButton;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)updateContent;
- (id)accessibilityLabel;
- (id)firstHeadImageUsername;
- (double)widthToFit:(double)a0;
- (void)layoutSubviews;
- (void)generateHeadImageViewsWith:(id)a0;
- (id)generateHeadImageView;
- (void).cxx_destruct;

@end

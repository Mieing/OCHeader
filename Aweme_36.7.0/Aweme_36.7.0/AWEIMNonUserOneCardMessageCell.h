@class UIImageView, NSTimer, UIView;

@interface AWEIMNonUserOneCardMessageCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIView *bgView;
@property (weak, nonatomic) UIView *oneCardView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) NSTimer *timer;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)__cancelTimer;
- (void)configWithMessage:(id)a0;
- (void)__hidenCoverImageViewWithAnimation:(BOOL)a0;
- (void)__loadOneCardView;
- (void)__loadCoverImageView;
- (void)__didEndDisplayingWithTimer:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)didEndDisplaying;

@end

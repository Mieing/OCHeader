@class UIImageView, UILabel, UIView, FinderLiveBadgeInfo;

@interface MMFinderLiveMemberSignView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UILabel *signLabel;
@property (nonatomic) long long style;
@property (retain, nonatomic) FinderLiveBadgeInfo *badgeInfo;

+ (struct CGSize { double x0; double x1; })signSizeWithBadgeInfo:(id)a0;

- (id)initWithUIStyle:(long long)a0 badgeInfo:(id)a1;
- (void)updateWithBadgeInfo:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateColor;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end

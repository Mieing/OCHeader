@class UILabel, UIImageView, WCFinderHeadImageView;

@interface WCFinderStreamProfileTitleView : MMTitleView

@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTextColor:(BOOL)a0;
- (void)updateWithContact:(id)a0;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)showArrowIcon;
- (void)adjustNickNameLabelWidthDelta:(double)a0;
- (void).cxx_destruct;

@end

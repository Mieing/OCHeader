@class UIImageView, YYLabel;

@interface AWEShareAsStoryCardView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;

- (id)initWithAvatarImage:(id)a0 title:(id)a1 description:(id)a2;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;
- (void)layoutSubviews;

@end

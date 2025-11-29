@class UIImageView, UILabel, UIView, MASConstraint;

@interface AWESearchAlbumBadge : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MASConstraint *labelToContainerLeft;
@property (retain, nonatomic) MASConstraint *labelToIconLeft;

- (void)updateWithIndex:(unsigned long long)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

@class AWEGuestHomeHeaderBgView, UIImageView, UILabel, UIView;

@interface AWEGuestHomeHeaderCell : UICollectionViewCell

@property (retain, nonatomic) AWEGuestHomeHeaderBgView *bgView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *topCornerContainerView;
@property (retain, nonatomic) UIView *followContainer;
@property (retain, nonatomic) UILabel *followNumLabel;
@property (retain, nonatomic) UILabel *followSuffixLabel;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)setupBinding;
- (void)didClickAvatar;
- (void)didClickName;
- (void)didClickFollowNum;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

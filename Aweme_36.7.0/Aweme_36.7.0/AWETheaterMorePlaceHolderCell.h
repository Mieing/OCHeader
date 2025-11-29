@class UIView;

@interface AWETheaterMorePlaceHolderCell : UICollectionViewCell

@property (retain, nonatomic) UIView *coverImage;
@property (retain, nonatomic) UIView *titleLabel;
@property (retain, nonatomic) UIView *userInfo;

+ (double)smallCardInfoViewHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

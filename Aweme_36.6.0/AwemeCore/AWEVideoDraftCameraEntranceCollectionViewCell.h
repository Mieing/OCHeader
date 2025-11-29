@class UIImageView, UILabel, UIView;

@interface AWEVideoDraftCameraEntranceCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroudImageView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;

@end

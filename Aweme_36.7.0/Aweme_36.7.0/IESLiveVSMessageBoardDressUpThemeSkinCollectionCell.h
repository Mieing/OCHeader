@class UIImageView, UILabel, UIView;

@interface IESLiveVSMessageBoardDressUpThemeSkinCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *selectedBottomView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *userLabel;
@property (retain, nonatomic) UIImageView *paidIcon;

- (void)setUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

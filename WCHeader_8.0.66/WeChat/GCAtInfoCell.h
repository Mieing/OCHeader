@class UIImageView, UILabel, UIView, MMHeadImageView;

@interface GCAtInfoCell : GCBaseCollectionViewCell

@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) UILabel *nickLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *selectedImgView;
@property (retain, nonatomic) UIView *leftSeperateLineView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithCellModel:(id)a0;
- (void).cxx_destruct;

@end

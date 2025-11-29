@class UIImageView, UILabel, BDPPageExitInterruptCustomDialogCellInfo;

@interface BDPPageExitInterruptCustomDialogCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) BDPPageExitInterruptCustomDialogCellInfo *cellInfo;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end

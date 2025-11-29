@class UILabel;

@interface IESLiveAnchorPreviewPerfViewContentCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *perfTitleLabel;
@property (retain, nonatomic) UILabel *perfDataLabel;

- (void)updateWithTitle:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

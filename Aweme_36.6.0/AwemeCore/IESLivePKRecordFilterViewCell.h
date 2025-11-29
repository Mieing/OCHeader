@class UILabel;

@interface IESLivePKRecordFilterViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *filterTabLabel;
@property (nonatomic) BOOL isSelected;

- (void)updateViewsWithSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end

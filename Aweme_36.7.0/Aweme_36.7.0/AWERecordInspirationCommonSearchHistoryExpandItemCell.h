@class UIImageView;

@interface AWERecordInspirationCommonSearchHistoryExpandItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *photoView;

+ (struct CGSize { double x0; double x1; })itemSize;

- (void)configureWithExpansionState:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

@class UILabel, UIImageView, UIView;
@protocol AWEDCFeedDividerCellDelegate;

@interface AWEDCFeedDividerCell : UICollectionViewCell

@property (retain, nonatomic) UIView *tips;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *icon;
@property (weak, nonatomic) id<AWEDCFeedDividerCellDelegate> delegate;

- (void)addGesture;
- (void)configCellWithModel:(id)a0;
- (void)refreshWithHistory;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

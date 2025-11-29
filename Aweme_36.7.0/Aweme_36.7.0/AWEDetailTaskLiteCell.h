@class UIView;
@protocol AWETaskLiteEntranceView;

@interface AWEDetailTaskLiteCell : UICollectionViewCell

@property (retain, nonatomic) UIView<AWETaskLiteEntranceView> *taskLiteEntranceView;

- (void)configWithModel:(id)a0;
- (void)p_addSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

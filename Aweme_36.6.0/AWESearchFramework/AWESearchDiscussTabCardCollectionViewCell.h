@class DUXBaseLabel, AWESearchDiscussTabColorModel, UIView;

@interface AWESearchDiscussTabCardCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseLabel *label;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWESearchDiscussTabColorModel *color;
@property (nonatomic) BOOL isSticky;

- (void)updateSticky:(BOOL)a0;
- (void)updateSelected:(BOOL)a0;
- (void)updateColorConfig:(id)a0;
- (void)updateTabModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end

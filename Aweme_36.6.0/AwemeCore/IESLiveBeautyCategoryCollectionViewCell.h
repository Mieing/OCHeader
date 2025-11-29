@class UILabel, IESLiveBeautyHandlerEntryItem, UIView;

@interface IESLiveBeautyCategoryCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *indicator;
@property (retain, nonatomic) IESLiveBeautyHandlerEntryItem *entryItem;
@property (retain, nonatomic) UIView *redDot;

- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutUI;

@end

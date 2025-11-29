@class NSMutableArray;

@interface MMFinderLivePkTaskedBonusGiftNotificationIndicatorView : UIView

@property (retain, nonatomic) NSMutableArray *inDisplayItems;
@property (retain, nonatomic) NSMutableArray *pool;
@property (nonatomic) double labelDisplayCenterX;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pushLine:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)rentLabelFromPool;
- (void)returnLabelToPool:(id)a0;
- (void).cxx_destruct;

@end

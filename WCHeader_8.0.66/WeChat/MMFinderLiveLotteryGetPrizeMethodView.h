@class FinderLiveLotteryClaimMethod, NSMutableArray, UIView;

@interface MMFinderLiveLotteryGetPrizeMethodView : UIView

@property (retain, nonatomic) FinderLiveLotteryClaimMethod *claimMethod;
@property (copy, nonatomic) NSMutableArray *itemArray;
@property (copy, nonatomic) NSMutableArray *itemHeightArray;
@property (retain, nonatomic) UIView *sepelateLine;
@property (nonatomic) double currentHeight;

- (double)getPrizeMethodViewHeightWithNormalClaimMethod:(id)a0;
- (double)getPrizeMethodViewHeightWithMilestoneClaimInfo:(id)a0;
- (double)getHeightWithClaimInfo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSeparateLine;
- (void)createItemWithClaimInfo:(id)a0 originY:(double)a1 height:(double)a2;
- (void).cxx_destruct;

@end

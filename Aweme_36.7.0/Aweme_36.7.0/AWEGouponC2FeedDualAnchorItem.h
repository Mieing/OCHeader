@class UIView, AWENearbyLifeDualAnchorInfo;

@interface AWEGouponC2FeedDualAnchorItem : UIView

@property (retain, nonatomic) AWENearbyLifeDualAnchorInfo *data;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double leftMaxWidth;
@property (nonatomic) double itemsWidth;
@property (nonatomic) long long topPadding;
@property (nonatomic) long long rightPadding;
@property (nonatomic) long long bottomPadding;
@property (nonatomic) long long leftPadding;
@property (nonatomic) double itemMarginLeft;

+ (BOOL)containsChineseCharacters:(id)a0;

- (void)createItemViewListWithListData:(id)a0 maxWidth:(double *)a1;
- (void)configDataSourceWithData:(id)a0 maxWidth:(double)a1;
- (double)anchorItemWidth;
- (double)anchorItemHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

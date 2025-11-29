@class NSIndexPath, NSArray, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMFinderLiveTask, NSMutableArray;

@interface MMLiveRewardGiftSendingCountMenuBar : MMRectTriangleArrowView

@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) NSMutableArray *countNumberViews;
@property (retain, nonatomic) NSArray *batchSendConfigNumbers;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ tapAction;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)removeAllSubViews;
- (void)removeAllCountNumberButtons;
- (void)registerCountNumberButtons:(id)a0;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void)onClickCountNumberLabel:(id)a0;
- (void)updateWithGiftItem:(id)a0 batchSendConfigNumbers:(id)a1 indexPath:(id)a2;
- (id)currentBasicReportParams;
- (void).cxx_destruct;

@end

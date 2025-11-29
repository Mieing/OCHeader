@class MMFinderLiveECHotSaleLikeAnimationMaskView, FinderLiveProductHintAnimationInfo, MMFinderLiveTaskId, MMUILabel;

@interface MMFinderLiveGoodsPromoteContentView : MMFinderLiveBaseGoodsPromoteContentView

@property (retain, nonatomic) MMUILabel *serialNumLabel;
@property (retain, nonatomic) MMFinderLiveECHotSaleLikeAnimationMaskView *hotSaleLikeAnimationMaskView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (readonly, nonatomic) FinderLiveProductHintAnimationInfo *currentHintAnimationInfo;
@property (readonly, nonatomic) BOOL isDuringHintAnimation;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)refreshData;
- (void)receiveHintAnimationInfo:(id)a0;
- (id)finderLiveLogReportValueForKey:(id)a0;
- (void).cxx_destruct;

@end

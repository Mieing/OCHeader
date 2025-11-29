@class NSString, FinderLiveProductHintAnimationInfo, MMFinderLiveECHotSaleLikeAnimationView, NSArray, MMFinderLiveTaskId, MMFinderLiveNumberAnimationLogic;

@interface MMFinderLiveECHotSaleLikeAnimationMaskView : UIView <WCFinderLiveLogReportValueProvider, MMFinderLiveECHotSaleLikeAnimationViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isDuringHintAnimation;
@property (nonatomic) BOOL hasAnimationViewEnter;
@property (weak, nonatomic) MMFinderLiveECHotSaleLikeAnimationView *currentAnimationView;
@property (retain, nonatomic) FinderLiveProductHintAnimationInfo *currentInfo;
@property (retain, nonatomic) NSArray *history;
@property (nonatomic) struct CGPoint { double x; double y; } margin;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (nonatomic) unsigned long long productID;
@property (readonly, nonatomic) MMFinderLiveNumberAnimationLogic *numberAnimationLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)finderLiveLogReportValueForKey:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)receiveHintAnimationInfo:(id)a0;
- (void)onShouldFinishAnimationView:(id)a0;
- (void).cxx_destruct;

@end

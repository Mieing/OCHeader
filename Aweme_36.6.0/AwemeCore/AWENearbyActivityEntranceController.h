@class AWENearbyResourceMarginConfig, NSDictionary, AWENearbyResourceNativeFrequencyModel, AWENearbyAnimationView;

@interface AWENearbyActivityEntranceController : NSObject

@property (retain, nonatomic) AWENearbyAnimationView *entranceView;
@property (retain, nonatomic) AWENearbyResourceMarginConfig *marginConfig;
@property (retain, nonatomic) AWENearbyResourceNativeFrequencyModel *freqModel;
@property (nonatomic) struct CGSize { double width; double height; } entrySize;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) long long pageType;
@property (nonatomic) BOOL hasDyanmic;
@property (nonatomic) BOOL loadResult;
@property (nonatomic) BOOL leaveGrouponTabOnce;

- (id)initWithPageType:(long long)a0;
- (void)leaveGrouponTab;
- (void)__jumpToUrlString:(id)a0 extraParams:(id)a1;
- (void)__trackEntranceLoadResult:(BOOL)a0 errMsg:(id)a1 scene:(id)a2 loadDuration:(double)a3 entranceData:(id)a4;
- (void)__cancelCountDown;
- (void)__parseEntryLayout:(id)a0;
- (void)__trackEntranceClick;
- (BOOL)__canPlayAnimation;
- (void)__countDownWithRemoveTime:(double)a0;
- (void)__trackEntranceShow;
- (void)__removeEntranceWhenTimeout;
- (void)updateActivityEntranceWithModel:(id)a0 loadCompletion:(id /* block */)a1 removeBlock:(id /* block */)a2;
- (void)enterToGrouponTab;
- (void)pauseEntranceViewAnimation;
- (void)resumeEntranceViewAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getEntranceViewPosition;
- (void).cxx_destruct;

@end

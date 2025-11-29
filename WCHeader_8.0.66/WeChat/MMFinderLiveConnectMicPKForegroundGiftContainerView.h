@class RfxPagFile, NSMutableDictionary, MMFinderLiveTaskId, MMFinderLiveRewardGiftItem, MMFinderLiveTask, PAGFile;

@interface MMFinderLiveConnectMicPKForegroundGiftContainerView : UIView

@property (retain, nonatomic) NSMutableDictionary *usernameForegroundHeightMap;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) NSMutableDictionary *usernameForgroundPAGViewMap;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *foregroundGiftItem;
@property (retain, nonatomic) PAGFile *foregroundPAGFile;
@property (retain, nonatomic) RfxPagFile *foregroundRfxPAGFile;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)forceRelayout;
- (void)updateForegroundHeightPercent:(double)a0 username:(id)a1;
- (void)refreshDisplay;
- (void)refreshDisplayWithUsername:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (BOOL)isUseRfxPAG;
- (id)getOrCreateForegroundPAGViewWithUsername:(id)a0;
- (void)resetPAGState;
- (void).cxx_destruct;

@end

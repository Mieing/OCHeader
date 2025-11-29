@class AWEDCFeedPageContext;

@interface AWEDCFeedDislikeViewModel : AWEDoubleColumnDislikeViewModel

@property (weak, nonatomic) AWEDCFeedPageContext *context;

+ (id)referString;
+ (id)enterMethod;
+ (id)logScenePrefix;
+ (id)commonParams:(id)a0;
+ (void)requestRevokeFeedbackVideo:(id)a0;
+ (id)businessParams:(id)a0;
+ (void)trackRevokeFeedbackWithModel:(id)a0 andFeedbackInfo:(id)a1;

- (id)dislikeLongPressPanelConfig;
- (void)sendDislikeRequest:(id)a0 extraInfo:(id)a1;
- (id)dislikeSectionData:(id)a0;
- (id)feedbackSectionData:(id)a0;
- (BOOL)calculatePanelHeightAfterConfig:(id)a0;
- (BOOL)useAdaptiveHeight:(id)a0;
- (double)headerHeightForSection:(long long)a0;
- (double)cellWidthForIndexPath:(id)a0;
- (void)recordDislikeModel:(id)a0;
- (id)dislikeTextConfig;
- (id)liveDislikeArray:(id)a0;
- (id)videoDislikeArray:(id)a0;
- (id)liveFeedbackInfoArray:(id)a0;
- (id)feedbackInfoArray:(id)a0;
- (id)configFeedbackTitle;
- (id)configSectionArray;
- (id)watchLaterSectionData:(id)a0;
- (BOOL)needRearrangeDislikePanelSection:(id)a0;
- (id)reArrangedDislikePanelSectionDataWithAwemeModel:(id)a0 dislikeSectionData:(id)a1 feedbackSection:(id)a2 watchLaterSectionData:(id)a3;
- (void)trackDislikeWithType:(id)a0;
- (void).cxx_destruct;
- (void)setCurrentModel:(id)a0;

@end

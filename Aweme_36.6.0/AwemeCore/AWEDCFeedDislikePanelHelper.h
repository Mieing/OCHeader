@class NSString;

@interface AWEDCFeedDislikePanelHelper : NSObject <AWEDCFeedDislikePanelHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dislikeLongPressPanelConfig;
+ (id)dislikeTextConfig;
+ (id)liveDislikeArray:(id)a0;
+ (id)videoDislikeArray:(id)a0;
+ (id)liveFeedbackInfoArray:(id)a0;
+ (id)feedbackInfoArray:(id)a0;
+ (id)configFeedbackTitleWithContext:(id)a0;
+ (id)configSectionArrayWithContext:(id)a0;
+ (void)sendDislikeRequestWithModel:(id)a0 referString:(id)a1 enterMethod:(id)a2 context:(id)a3 extraInfo:(id)a4 completion:(id /* block */)a5;
+ (void)trackRevokeFeedbackWithModel:(id)a0 referString:(id)a1 enterMethod:(id)a2 feedbackInfo:(id)a3 extraParams:(id)a4;
+ (void)trackDislikeWithAwemeModel:(id)a0 dislikeType:(id)a1 context:(id)a2;
+ (BOOL)calculatePanelHeightAfterConfig:(id)a0 context:(id)a1;
+ (BOOL)useAdaptiveHeight:(id)a0 context:(id)a1;
+ (BOOL)needRearrangeDislikePanelSection:(id)a0 context:(id)a1;
+ (id)reArrangedDislikePanelSectionDataWithAwemeModel:(id)a0 dislikeSectionData:(id)a1 feedbackSection:(id)a2 watchLaterSectionData:(id)a3 context:(id)a4;
+ (double)headerHeightForSection:(long long)a0 viewModel:(id)a1 context:(id)a2;
+ (double)cellWidthForIndexPath:(id)a0 viewModel:(id)a1 context:(id)a2;
+ (id)dislikeSectionData:(id)a0 context:(id)a1;
+ (id)feedbackSectionData:(id)a0 context:(id)a1;
+ (id)feedbackSectionDataUseConfig:(id)a0 context:(id)a1;
+ (id)watchLaterSectionData:(id)a0 context:(id)a1;


@end

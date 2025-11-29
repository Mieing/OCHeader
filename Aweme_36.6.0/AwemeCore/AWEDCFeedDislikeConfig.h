@class NSString, AWEDCFeedDislikeCommonPanelConfig;
@protocol AWEDCFeedDislikeVCDelegate;

@interface AWEDCFeedDislikeConfig : AWEDCFeedBaseConfig

@property (retain, nonatomic) Class viewModelClass;
@property (nonatomic) BOOL enableFeedbackToast;
@property (copy, nonatomic) id /* block */ shouldShowDislikeVCBlock;
@property (copy, nonatomic) id /* block */ customDislikeVCBlock;
@property (copy, nonatomic) id /* block */ dislikeShowBlock;
@property (copy, nonatomic) id /* block */ onDidClickItem;
@property (retain, nonatomic) AWEDCFeedDislikeCommonPanelConfig *dislikeCommonPanelConfig;
@property (copy, nonatomic) id /* block */ isDislikedAfterRevokeBlock;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (copy, nonatomic) NSString *feedbackDescription;
@property (copy, nonatomic) id /* block */ revokeFeedbackProcessBlock;
@property (weak, nonatomic) id<AWEDCFeedDislikeVCDelegate> delegate;
@property (copy, nonatomic) id /* block */ dislikePanelCalculateHeightAfterConfigBlock;
@property (copy, nonatomic) id /* block */ dislikePanelUseAdaptiveHeightBlock;
@property (copy, nonatomic) id /* block */ dislikePanelNeedRearrangeSectionBlock;
@property (copy, nonatomic) id /* block */ dislikePanelRearrangedSectionDataBlock;
@property (copy, nonatomic) id /* block */ dislikePanelHeaderHeightForSectionBlock;
@property (copy, nonatomic) id /* block */ dislikePanelCellWidthForIndexPathBlock;
@property (copy, nonatomic) id /* block */ dislikePanelNeedSendDislikeRequest;
@property (copy, nonatomic) id /* block */ dislikePanelNeedTrackDislike;
@property (copy, nonatomic) id /* block */ dislikePanelWatchLaterSectionDataBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end

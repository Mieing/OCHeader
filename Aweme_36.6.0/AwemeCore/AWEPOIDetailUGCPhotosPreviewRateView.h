@class UIView, NSString, AWEPOICommentFeedbackProvider, AWEPOIFeedUgcItemModel, AWEPOIDetailFeedUgcRateLabel, AWEPOIDetailUGCPhotosPreviewRateLayoutInfo, AWEPOIDetailFeedUgcInfoTagsContainerView, AWEPOIDetailSkinConfig, YYLabel, UILabel, DUXBottomNotification;
@protocol AWEPOIDetailUGCPhotosPreviewRateViewDelegate, AWEPOICommentFeedbackProtocol;

@interface AWEPOIDetailUGCPhotosPreviewRateView : UIView <AWEPOIDetailFeedUgcRateLabelDelegate, AWEPOICommentFeedbackHostProtocol>

@property (retain, nonatomic) YYLabel *nameLabel;
@property (retain, nonatomic) AWEPOIDetailFeedUgcInfoTagsContainerView *contentTagsView;
@property (retain, nonatomic) UILabel *scoreTitleLabel;
@property (retain, nonatomic) AWEPOIDetailFeedUgcInfoTagsContainerView *scoreTagsView;
@property (retain, nonatomic) AWEPOIDetailFeedUgcRateLabel *contentLabel;
@property (retain, nonatomic) UIView<AWEPOICommentFeedbackProtocol> *feedbackView;
@property (retain, nonatomic) AWEPOICommentFeedbackProvider *feedbackViewProvider;
@property (retain, nonatomic) DUXBottomNotification *diggHintView;
@property (nonatomic) unsigned long long feedbackType;
@property (retain, nonatomic) AWEPOIDetailUGCPhotosPreviewRateLayoutInfo *layoutInfo;
@property (retain, nonatomic) AWEPOIFeedUgcItemModel *ugcModel;
@property (nonatomic) BOOL adaptForCommentTab;
@property (weak, nonatomic) id<AWEPOIDetailUGCPhotosPreviewRateViewDelegate> delegate;
@property (retain, nonatomic) AWEPOIDetailSkinConfig *skinConfig;
@property (readonly, nonatomic) long long ugcOrderIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSubviewsLayout;
- (void)didClickFeedbackButton:(unsigned long long)a0;
- (id)ugcTrackingParams;
- (BOOL)hasDoRateDiggAction;
- (id)feedbackBDXPublishEventParams;
- (id)requestParamsForUgcDigg;
- (BOOL)shouldShowScoreTitle;
- (void)didClickExpand;
- (void)didClickExpandToken:(long long)a0;
- (void)didClickCollapseToken:(long long)a0;
- (void)updateRateView;
- (id)initWithFeedbackType:(unsigned long long)a0 ugcModel:(id)a1 adaptForCommentTab:(BOOL)a2;
- (double)rateViewHeight;
- (void)showDiggHintViewWithText:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end

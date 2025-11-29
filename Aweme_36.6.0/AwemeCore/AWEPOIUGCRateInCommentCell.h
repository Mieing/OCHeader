@class AWEPOIDetailFeedUgcRateLabel, UILabel, AWEPOIDetailFeedUgcPhotosView, NSDictionary, UITapGestureRecognizer, AWEPOICommentFeedbackProvider, AWEPOIUGCDeleteButton, UIView, NSString, AWEPOIDetailConstData, AWEPOIDetailFeedUgcAvatarView, AWEPOIDetailFeedUgcInfoTagsContainerView, AWEPOIFeedUgcItemModel;
@protocol AWEPOIDetailAwemeWaterfallAwemeCellDelegate, AWEPOICommentFeedbackProtocol;

@interface AWEPOIUGCRateInCommentCell : UICollectionViewCell <AWEPOIDetailFeedUgcAvatarViewDelegate, AWEPOIDetailUGCPhotosPreviewViewControllerDelegate, AWEPOIDetailFeedUgcRateLabelDelegate, AWEPOICommentFeedbackHostProtocol, UIGestureRecognizerDelegate, AWEPOIDetailAwemeWaterfallAwemeCellProtocol, AWEWaterFallCellProtocol>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEPOIUGCDeleteButton *deleteButton;
@property (retain, nonatomic) AWEPOIDetailFeedUgcAvatarView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEPOIDetailFeedUgcInfoTagsContainerView *userTagsView;
@property (retain, nonatomic) AWEPOIDetailFeedUgcInfoTagsContainerView *contentTagsView;
@property (retain, nonatomic) UILabel *scoreTitleLabel;
@property (retain, nonatomic) AWEPOIDetailFeedUgcInfoTagsContainerView *scoreTagsView;
@property (retain, nonatomic) AWEPOIDetailFeedUgcRateLabel *contentLabel;
@property (retain, nonatomic) AWEPOIDetailFeedUgcPhotosView *photosView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView<AWEPOICommentFeedbackProtocol> *feedbackView;
@property (retain, nonatomic) AWEPOICommentFeedbackProvider *feedbackViewProvider;
@property (nonatomic) long long cellIndex;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWEPOIDetailConstData *constData;
@property (retain, nonatomic) AWEPOIFeedUgcItemModel *ugcModel;
@property (nonatomic) BOOL isRequestOnAir;
@property (weak, nonatomic) id<AWEPOIDetailAwemeWaterfallAwemeCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long ugcOrderIndex;
@property (nonatomic) unsigned long long scene;

+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;

- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)a0;
- (void)willDisplaying;
- (void)didClickCell;
- (void)didClickDelete;
- (void)enterUserPage;
- (id)trackingParams;
- (void)updateCellWithModel:(id)a0 constData:(id)a1 index:(long long)a2;
- (id)ugcTrackingParams;
- (BOOL)hasDoRateDiggAction;
- (id)feedbackBDXPublishEventParams;
- (id)requestParamsForUgcDigg;
- (BOOL)isFromIsolated;
- (void)didClickAvatar;
- (void)didClickOrnament;
- (void)succeedAnonymousNoti:(id)a0;
- (void)updateSubviewsLayoutWithModel:(id)a0;
- (void)updateDeleteButtonIfNeeded;
- (BOOL)shouldShowScoreTitle;
- (void)didClickExpand;
- (void)didClickExpandToken:(long long)a0;
- (BOOL)canShowRateDiggHint;
- (id)rateDiggHintText;
- (BOOL)canShowRateDiggHintInLocalAndUpdate;
- (void)didClickUserName;
- (void)didSelectPhotoWithIndex:(long long)a0;
- (id)photosPreviewBDXPublishEventParamsForUgcDigg;
- (void)didClickCollapseToken:(long long)a0;
- (void)didClickContentTextArea;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)displayStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end

@class UIView, NSString, UIImage, AWEIMMessageAttachmentDownloadViewModel, UIImageView, AWEIMMessage, YYLabel, AWEIMMessageStateView, UILabel;

@interface AWEIMShareStoryMessageTableViewCell : AWEIMUserMessageTableViewCell <AWEIMPreTaskProtocol, AWEIMGradientBubbleProtocol, IESIMOldCellZoomTransitionProtocol>

@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIView *nonexistentContainerView;
@property (retain, nonatomic) UIImageView *nonexistentImageView;
@property (retain, nonatomic) UILabel *nonexistentLabel;
@property (retain, nonatomic) UIView *textView;
@property (retain, nonatomic) YYLabel *storyReplayLabel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;
@property (retain, nonatomic) AWEIMMessageStateView *loadingView;
@property (retain, nonatomic) UIImage *locoalPostImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEIMMessage *message;
@property (readonly, nonatomic) UIView *gradientBubbleView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)_defaultVideoImage;
+ (id)identifier;

- (id)preloadTasksForMessage:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)bubbleShapeView;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)p_updateBubbleLayer;
- (BOOL)menuViewRectContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_trackVideoUnavaliableShow;
- (id)textViewLayer;
- (void)storyCoverTapped:(id)a0;
- (void)p_stopDownloadLoading;
- (BOOL)hasLocalStoryDetail;
- (void)completeCoverageTaskForMessage:(id)a0 error:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })messageBubbleFrame;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end

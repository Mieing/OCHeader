@class NSString, UIImageView, CAShapeLayer, UILabel, UIView, YYLabel;

@interface AWEIMResponseToWhoSeeMyStoryMessageTableViewCell : AWEIMUserMessageTableViewCell <IESIMOldCellZoomTransitionProtocol>

@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIView *nonexistentContainerView;
@property (retain, nonatomic) UIImageView *nonexistentImageView;
@property (retain, nonatomic) UILabel *nonexistentLabel;
@property (retain, nonatomic) UIView *textView;
@property (retain, nonatomic) CAShapeLayer *textViewLayer;
@property (retain, nonatomic) YYLabel *storyReplayLabel;
@property (retain, nonatomic) UIView *separateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)_defaultVideoImage;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)p_updateBubbleLayer;
- (BOOL)menuViewRectContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)p_trackVideoUnavaliableShow;
- (void)storyCoverTapped:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;

@end

@class NSLock, UIView, AWESearchTracker, NSString, UIImageView, UIButton, AWESearchImageTextVerticalModel, YYLabel, AWESearchCachalotResultContext, NSNumber, UILabel;
@protocol _TtP9AWELottie13AWELottieView_, AWEModernFeedCellContext;

@interface AWESearchImageTextVerticalCardView : UIView <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) UIImageView *imageImageView;
@property (retain, nonatomic) UIImageView *moreImageImageView;
@property (retain, nonatomic) UIView *textVerticalmaskView;
@property (retain, nonatomic) UIView *maskImageView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userName;
@property (nonatomic) BOOL like;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *diggLottieView;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *cancelDiggLottieView;
@property (retain, nonatomic) NSLock *diggLock;
@property (retain, nonatomic) NSNumber *likeNumber;
@property (retain, nonatomic) UILabel *numberOfLikeLabel;
@property (retain, nonatomic) AWESearchImageTextVerticalModel *dataModel;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (retain, nonatomic) AWESearchTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (double)getImageViewHeightWithModel:(id)a0;
+ (double)getHeightFromImageToContent:(id)a0;
+ (double)getContentLabelHeightWithModel:(id)a0 width:(double)a1;
+ (double)getBottomHeightWithModel:(id)a0;

- (void)configUI;
- (void)trackShow;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)onAwemeDiggNotification:(id)a0;
- (void)trackClick;
- (void)_stopLikeAnimation;
- (void)_playLikeAnimation;
- (void)playLikeAnimation;
- (void)likeButtonClick;
- (void)updateAccessibility;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)digg;
- (struct CGSize { double x0; double x1; })getSizeWithImageView:(id)a0;
- (id)creatAttributedStringWithModel:(id)a0;
- (void)trackEnterFeed;
- (void)updateLikeNumber;
- (void)p_diggWithModel;
- (void)trackDigg;
- (void)playDisLikeAnimation;
- (void)trackCancelDigg;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAnimationFrame;
- (void)_stopDisLikeAnimation;
- (void)_playDisLikeAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end

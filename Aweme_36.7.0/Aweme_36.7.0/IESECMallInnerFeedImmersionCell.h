@class IESECMallInnerFeedImmersionContentView, IESECGradientView, IESECVideoMuteTagView, IESECMallInnerFeedImmersionPageHeaderView, IESECMallInnerFeedPageControl, NSArray, IESECURLModel, UIView, NSString, IESECMallInnerFeedRecommendCardModel, IESECMallImmersionCarouselView, IESECMallInnerFeedImmersionBottomActionView, IESECMallInnerFeedImmersionVideoPlayerView, IESECGoodsFeedImageLoadMoreView, UIImageView;
@protocol IESECMallInnerFeedImmersionAutoPlayManagerDelegate;

@interface IESECMallInnerFeedImmersionCell : UICollectionViewCell <IESECContentCarouselViewDelegate, IESECAwemeVideoViewDelegate>

@property (retain, nonatomic) UIImageView *bgEffectImageView;
@property (retain, nonatomic) IESECMallImmersionCarouselView *carouselView;
@property (retain, nonatomic) UIView *scrollBackView;
@property (retain, nonatomic) IESECGoodsFeedImageLoadMoreView *imageLoadMoreView;
@property (retain, nonatomic) IESECMallInnerFeedPageControl *pageControl;
@property (retain, nonatomic) IESECMallInnerFeedImmersionPageHeaderView *pageHeader;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) IESECMallInnerFeedImmersionContentView *contentAreaView;
@property (retain, nonatomic) IESECMallInnerFeedImmersionBottomActionView *bottomActionView;
@property (retain, nonatomic) IESECMallInnerFeedRecommendCardModel *viewModelV2;
@property (retain, nonatomic) IESECURLModel *fakeImageModel;
@property (retain, nonatomic) IESECVideoMuteTagView *muteTagView;
@property (nonatomic) BOOL mute;
@property (retain, nonatomic) IESECMallInnerFeedImmersionVideoPlayerView *videoPlayerView;
@property (nonatomic) long long playState;
@property (retain, nonatomic) NSArray *detailPicture;
@property (nonatomic) long long mallImmersionGuideCellCount;
@property (nonatomic) BOOL plachHolderData;
@property (nonatomic) long long currentImageIndex;
@property (nonatomic) long long index;
@property (nonatomic) long long clickArea;
@property (nonatomic) BOOL hasVideoPlayer;
@property (weak, nonatomic) id<IESECMallInnerFeedImmersionAutoPlayManagerDelegate> delegate;
@property (nonatomic) BOOL waitingToPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoView:(id)a0 playbackFailedWithError:(id)a1;
- (void)videoView:(id)a0 didChangePlayState:(unsigned long long)a1;
- (void)addFakeModelIfNeeded;
- (void)startAutoPlay;
- (void)stopAutoPlay;
- (void)setViewModelIsManualSlided:(BOOL)a0;
- (BOOL)isManualSlided;
- (void)responseScrollImageEventWithIndex:(long long)a0;
- (void)updateImageLayoutProgress:(double)a0;
- (void)updateCarouselView;
- (void)updateCurrentImageIndex:(long long)a0;
- (void)respondEvent:(id)a0 responder:(id)a1;
- (void)gotoProductDetail;
- (void)carouselView:(id)a0 didClickContentAt:(long long)a1;
- (void)carouselView:(id)a0 didScrollToIndex:(long long)a1;
- (void)carouselView:(id)a0 didScrollToIndexWithAccessibility:(long long)a1;
- (void)carouselViewWillBeginDragging:(id)a0;
- (void)carouselView:(id)a0 willDisplayAtIndex:(long long)a1;
- (id)getReportProductTagArrays;
- (void)muteTagViewDidTap;
- (void)startCommentTextAutoPage;
- (BOOL)hasLayoutImage;
- (void)configClickAreaWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)loadBgImageAndPreDownloadNextImage:(long long)a0;
- (void)videoPlayerViewDidTap:(id)a0;
- (void)updateImageLayout;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)updateWithNewModel:(id)a0;

@end

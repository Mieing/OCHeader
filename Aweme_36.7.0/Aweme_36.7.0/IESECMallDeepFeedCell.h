@class IESECGradientView, UILabel, IESECMallDeepFeedCarouselView, IESECMallDeepFeedLoadMoreView, IESECMallDeepFeedRecommendCardModel, IESECURLModel, IESECMallDeepFeedVideoSlider, IESECMallDeepFeedCarouselImageLayout, NSString, IESECMallDeepFeedSearchView, IESECMallDeepFeedContentView, IESECGalleryBar, NSArray, IESECMallDeepFeedVideoPlayerView;
@protocol IESECMallDeepFeedAutoPlayManagerDelegate;

@interface IESECMallDeepFeedCell : UICollectionViewCell <IESECMallDeepFeedCarouselViewDelegate, IESECMallVideoPlayerWrapperDelegate, IESECMallDeepFeedVideoSliderDelegate>

@property (retain, nonatomic) IESECMallDeepFeedCarouselView *carouselView;
@property (retain, nonatomic) IESECMallDeepFeedLoadMoreView *imageLoadMoreView;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) IESECMallDeepFeedContentView *contentAreaView;
@property (retain, nonatomic) IESECMallDeepFeedRecommendCardModel *viewModel;
@property (retain, nonatomic) IESECMallDeepFeedVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) NSArray *detailPicture;
@property (retain, nonatomic) IESECGalleryBar *galleryBar;
@property (retain, nonatomic) IESECMallDeepFeedSearchView *searchView;
@property (retain, nonatomic) IESECMallDeepFeedVideoSlider *videoSlider;
@property (retain, nonatomic) IESECMallDeepFeedCarouselImageLayout *imageLayout;
@property (retain, nonatomic) UILabel *adLabel;
@property (nonatomic) BOOL placeHolderData;
@property (nonatomic) long long currentImageIndex;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasVideoPlayer;
@property (retain, nonatomic) IESECURLModel *fakeImageModel;
@property (nonatomic) BOOL showFakeImage;
@property (weak, nonatomic) id<IESECMallDeepFeedAutoPlayManagerDelegate> delegate;
@property (nonatomic) BOOL waitingToPlay;
@property (nonatomic) long long notFullScreenCellCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(long long)a0;
- (void)didError:(id)a0;
- (void)updateCurrent:(double)a0 duration:(double)a1;
- (double)customTimerPeriodic;
- (void)addFakeModelIfNeeded;
- (void)stopAutoPlay;
- (void)updateSliderValue:(double)a0;
- (void)updateItemAtIndex:(unsigned long long)a0 toProgress:(double)a1;
- (void)setViewModelIsManualSlided:(BOOL)a0;
- (BOOL)isManualSlided;
- (void)responseScrollImageEventWithIndex:(long long)a0;
- (void)carouselLoadMoreViewDidScroll:(double)a0;
- (void)updateImageLayoutProgress:(double)a0;
- (void)updateCarouselView;
- (void)updateCurrentImageIndex:(long long)a0;
- (void)respondEvent:(id)a0 responder:(id)a1;
- (void)gotoProductDetail;
- (void)carouselView:(id)a0 didClickContentAt:(long long)a1;
- (void)carouselView:(id)a0 didScrollToIndex:(long long)a1;
- (void)carouselView:(id)a0 didScrollToIndexWithAccessibility:(long long)a1;
- (void)carouselViewWillBeginDragging:(id)a0;
- (void)videoReadyToDisplay;
- (void)seekToPlaybackTime:(double)a0;
- (void)changeSlidingState:(BOOL)a0;
- (void)updateImageLayoutWithCurrentIndex:(long long)a0;
- (void)updatePlaceHolderDataWithNewModel:(id)a0;
- (id)getReportProductTagArrays;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)setNumberOfItems:(long long)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (void)updateWithNewModel:(id)a0;
- (double)contentViewHeight;

@end

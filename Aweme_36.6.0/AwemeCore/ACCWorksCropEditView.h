@class ACCCutSameCropMaskView, ACCPlaybackView, NSURL, ACCButton, AVURLAsset, UIImageView, AWEVideoPublishViewModel, NSString, ACCCutSamePlayerControlView, UIScrollView;
@protocol ACCCutSameStylePreviewFragmentProtocol;

@interface ACCWorksCropEditView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) id<ACCCutSameStylePreviewFragmentProtocol> fragment;
@property (retain, nonatomic) UIScrollView *containerScrollView;
@property (retain, nonatomic) UIImageView *videoImageView;
@property (nonatomic) struct CGSize { double width; double height; } videoImageSize;
@property (retain, nonatomic) ACCCutSamePlayerControlView *videoPlayerControlView;
@property (retain, nonatomic) ACCPlaybackView *videoPlayerView;
@property (nonatomic) struct CGSize { double width; double height; } videoOriginalSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } curTimeOffset;
@property (retain, nonatomic) id playerObserver;
@property (retain, nonatomic) ACCCutSameCropMaskView *cropMaskView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropMaskRect;
@property (retain, nonatomic) ACCButton *changeMaterialButton;
@property (nonatomic) BOOL isPauseByOthers;
@property (nonatomic) BOOL isPauseByDisappear;
@property (nonatomic) BOOL canScale;
@property (nonatomic) BOOL didModified;
@property (copy, nonatomic) NSURL *imageFileURL;
@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (copy, nonatomic) id /* block */ playTimeCallback;
@property (copy, nonatomic) id /* block */ changeMaterialCallback;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) long long curIdx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_appWillResignActive:(id)a0;
- (void)p_appDidBecomeActive:(id)a0;
- (void)refreshFrame;
- (void)pauseBySlide;
- (void)playIfPauseBySlide;
- (id)currentCrops;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })currentTimeRange;
- (void)reverseCrops;
- (void)didPlayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fragment:(id)a1 canScale:(BOOL)a2;
- (void)changeTimeOffest:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)contentTypeFromModel:(id)a0;
- (void)p_handleContainerViewTapped:(id)a0;
- (void)onChangeMaterialAction:(id)a0;
- (void)trackForCropImageAsset:(id)a0;
- (void)playIfPauseByDisappear;
- (void)pauseByDisappear;
- (void)makeViewCenterInEditView;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)pause;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)reset;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)refreshTime;

@end

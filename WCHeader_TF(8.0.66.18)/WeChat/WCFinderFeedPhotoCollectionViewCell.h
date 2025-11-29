@class WCFinderFeedMediaWrap, MMUIButton, WCFinderMediaInfo, NSString, WCFinderFeedImageView, WCFinderSimplePhotoView, UITapGestureRecognizer;
@protocol WCFinderHalfScreenListenProtocol, WCFinderFeedContentMediaActionProtocol, WCFinderFeedPhotoCollectionViewCellDelegate;

@interface WCFinderFeedPhotoCollectionViewCell : UICollectionViewCell <WCFinderFeedImageViewProtocol, UIGestureRecognizerDelegate, WCFinderHalfScreenListenProtocol, WCFinderSimplePhotoViewDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *likeGes;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) WCFinderFeedImageView *imageContainer;
@property (retain, nonatomic) WCFinderSimplePhotoView *photoView;
@property (retain, nonatomic) MMUIButton *livePhotoButton;
@property (weak, nonatomic) id<WCFinderFeedContentMediaActionProtocol> delegate;
@property (weak, nonatomic) id<WCFinderFeedPhotoCollectionViewCellDelegate> cellDelegate;
@property (weak, nonatomic) id<WCFinderHalfScreenListenProtocol> halfScreenDelegate;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) unsigned int attrFuncFlag;
@property (nonatomic) BOOL enableTapAction;
@property (nonatomic) BOOL isSubScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setUpUI;
- (void)setupGestureIfNeeded;
- (void)removeGestureIfNeeded;
- (void)_updateImage:(id)a0;
- (BOOL)updateLivePhotoIconAlphaZeroStateIfNeeded:(BOOL)a0;
- (void)reloadImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageViewRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageViewRectWithAspectFit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMediaViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMediaCollectionViewFrame;
- (double)getInteractivePanelTop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageViewRectWithFullScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageViewRectWithDetailFill;
- (void)onLikeFeed:(id)a0;
- (void)onTap:(id)a0;
- (void)onFinderImageDownloadFail:(id)a0;
- (void)onFinderImageLoadSuccess:(id)a0;
- (BOOL)canBrowseLivePhoto;
- (void)loadingRetry;
- (void)feedImageViewLoadSuc:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)getPhotoThumb;
- (void)changeFeedImageViewBackgroundColor:(id)a0;
- (BOOL)isMediaContentReady;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageContainerFrame;
- (void)startPlayPhotoIfNeeded;
- (void)pausePlayPhotoIfNeeded;
- (void)finderSimplePhotoView:(id)a0 updateVideoPosition:(double)a1 videoDuration:(double)a2;
- (void)finderSimplePhotoViewDidPlayLivePhotoToEnd:(id)a0;
- (void)halfScreenMoveProgressChanged;
- (void).cxx_destruct;

@end

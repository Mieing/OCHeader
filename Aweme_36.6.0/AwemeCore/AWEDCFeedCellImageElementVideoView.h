@class UIView, NSString, AWEAwemeModel, AWEDCFeedPageContext, AWEDCFeedBaseCellElement, UIViewController;
@protocol AWEAwemePlayVideoViewControllerProtocol, AFDSlidesViewProtocol, AWEDCFeedCellImageElementVideoViewPlayerProtocol;

@interface AWEDCFeedCellImageElementVideoView : UIView <AWEPlayVideoDelegate, AWEDCFeedCellImageElementVideoViewProtocol>

@property (weak, nonatomic) AWEDCFeedBaseCellElement *containerElement;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEDCFeedPageContext *pageContext;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *videoPlayer;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *imageSliderView;
@property (nonatomic) BOOL isVideoPlaying;
@property (nonatomic) BOOL isImagePlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEDCFeedCellImageElementVideoViewPlayerProtocol> playerDelegate;

- (double)getDefaultSeekToTime;
- (unsigned long long)playType;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (id)associateRule;
- (double)currentPlayBackTime;
- (long long)currentPlayBackIndex;
- (id)classNameWithReferString;
- (void)configWithModel:(id)a0 context:(id)a1 extraParams:(id)a2;
- (void)setupVideoPlayer;
- (void)setupImageSliderView;
- (long long)getDefaultIndex;
- (void)resetImageSliderView;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)reset;
- (id)initWithElement:(id)a0;
- (void)resetVideoPlayer;

@end

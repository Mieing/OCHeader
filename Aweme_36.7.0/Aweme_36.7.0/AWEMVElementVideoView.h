@class AWEMVChannelPlayVideoViewController, NSString, NSDictionary, AWEAwemeModel, AWEDCFeedPageContext, AWEDCFeedBaseCellElement, UIViewController;
@protocol AWEDCFeedCellImageElementVideoViewPlayerProtocol;

@interface AWEMVElementVideoView : UIView <AWEMVPlayVideoViewDelegate, AWEMVChannelPlayerCardPlayerProtocol, AWEDCFeedCellImageElementVideoViewProtocol>

@property (weak, nonatomic) AWEDCFeedBaseCellElement *containerElement;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) AWEDCFeedPageContext *pageContext;
@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) AWEMVChannelPlayVideoViewController *videoViewController;
@property (nonatomic) BOOL hasPreloadNextEpisode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEDCFeedCellImageElementVideoViewPlayerProtocol> playerDelegate;

- (void)playerDidReadyForDisplay:(id)a0;
- (unsigned long long)playType;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)playerWillStartNextLoopFinished:(id)a0;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (BOOL)p_enableVideoPlay;
- (void)configWithModel:(id)a0 context:(id)a1 extraParams:(id)a2;
- (void)setupVideoPlayer;
- (void)updateVideoPlayer;
- (id)mvPageContext;
- (void)configBeforeEnterLandscape;
- (void)configAfterQuitLandscape;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (BOOL)isPlaying;
- (void)reset;
- (id)initWithElement:(id)a0;

@end

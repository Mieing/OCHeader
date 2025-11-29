@class AWESearchBaseImagePlayerModel, NSString, AWESearchEventDispather, NSDictionary, UIView, NSMutableArray;
@protocol AWESearchImagePlayerViewProtocol, AWESearchContainerProtocol, AWESearchBaseImagePlayerComponentBroadCast, AWESearchComponentProtocol;

@interface AWESearchBaseImagePlayerComponent : AWESearchComponent <AWESearchImageSetViewDelegate, AWESearchBaseImagePlayerComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView<AWESearchImagePlayerViewProtocol> *imagePlayerView;
@property (retain, nonatomic) AWESearchBaseImagePlayerModel *imagePlayerModel;
@property (retain, nonatomic) NSMutableArray *broadCastArray;
@property (retain, nonatomic) id<AWESearchBaseImagePlayerComponentBroadCast> broadCast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)setLogExtra:(id)a0;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)a0;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)didPlayError:(id)a0;
- (void)didStartStall;
- (void)setStartPlayTime:(double)a0;
- (id)imageSliderView;
- (void)scrollToIndex:(long long)a0 method:(unsigned long long)a1 animated:(BOOL)a2;
- (void)didRecallResource;
- (void)componentDidLoad;
- (void)resetPlayerViewControllerProps;
- (void)albumPlayTime:(double)a0 totalTime:(double)a1 index:(long long)a2;
- (void)didItemChangeAtIndex:(long long)a0;
- (void)didAlbumEnd;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)updateWithChunkModel:(id)a0;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (void)updateImagePlayerViewWithUpdatePlayer:(BOOL)a0;
- (BOOL)isPlayerMute;
- (void)setPlayerMute:(BOOL)a0;
- (long long)imageCurrentIndex;
- (long long)exposedImageCount;
- (void)setImagePlayModel:(unsigned long long)a0;
- (void)setImageUserScrolled:(BOOL)a0;
- (BOOL)enableUseRichContentImagePlayerView;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)currentImageView;
- (void)stop;
- (id)transitionContext;
- (void)didEnd;
- (id)playerController;
- (void)reset;
- (double)currentPlaybackTime;
- (id)componentView;
- (void)setupUI;
- (void)addBoundaryTimeObserverForTimes:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)didStart;
- (long long)playState;
- (void)setScaleMode:(long long)a0;
- (void)didStop;
- (void)didPause;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end

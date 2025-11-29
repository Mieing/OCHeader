@class AWESearchEventDispather, NSString, NSDictionary, AWESearchStandardImagePlayerModel, NSMutableArray, UIView;
@protocol AWESearchBaseImagePlayerComponentProvider, AWESearchContainerProtocol, AWESearchImagePlayerInteractorComponentProvider, AWESearchComponentProtocol;

@interface AWESearchStandardImagePlayerComponent : AWESearchComponent <AWESearchStandardImagePlayerComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchStandardImagePlayerModel *model;
@property (retain, nonatomic) id<AWESearchImagePlayerInteractorComponentProvider> interactorComponent;
@property (retain, nonatomic) id<AWESearchBaseImagePlayerComponentProvider> imagePlayerComponent;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calculateAlbumContainerSizeWithAlbumImages:(id)a0;
+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (id)getCreatSubComponentsArrayWithModel:(id)a0;

- (void)setLogExtra:(id)a0;
- (id)logExtra;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)a0;
- (void)setDefaultSeekToTime:(double)a0;
- (id)imageSliderView;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)receiveProtocolList;
- (void)setPlayerSeekTime:(double)a0 completion:(id /* block */)a1;
- (void)p_loadComponent;
- (void)trackAdPlayValidAndBreakIfNeeded;
- (BOOL)isPlayerMute;
- (void)setPlayerMute:(BOOL)a0;
- (long long)imageCurrentIndex;
- (long long)exposedImageCount;
- (void)setImagePlayModel:(unsigned long long)a0;
- (void)setImageUserScrolled:(BOOL)a0;
- (void)imageAndPlayerPlay;
- (void)imageAndPlayerPause;
- (void)imageAndPlayerReset;
- (void).cxx_destruct;
- (id)currentImageView;
- (id)transitionContext;
- (id)playerController;
- (double)currentPlaybackTime;
- (id)componentView;
- (void)addBoundaryTimeObserverForTimes:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (long long)playState;

@end

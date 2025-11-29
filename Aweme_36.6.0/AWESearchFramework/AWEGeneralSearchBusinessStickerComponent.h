@class AWESearchEventDispather, NSString, AWEGeneralSearchVideoCardModel, MediaDecrypter, NSDictionary, NSMutableArray;
@protocol AWESearchStandardVideoPlayerComponentProvider, AWEVideoInteractiveProtocol, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWEGeneralSearchBusinessStickerComponent : AWESearchComponent <AWEVideoInteractiveDelegate, AWEVideoInteractiveDataSource, AWEGeneralSearchBusinessStickerComponentProvider>

@property (retain, nonatomic) id<AWEVideoInteractiveProtocol> interactiveContainer;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *cardModel;
@property (weak, nonatomic) id<AWESearchStandardVideoPlayerComponentProvider> playerProvider;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (retain, nonatomic) MediaDecrypter *decrypter;
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

+ (id)showStickersType;
+ (BOOL)shouldDisplayStickerWithAweme:(id)a0;
+ (BOOL)challengeInteractiveStickersOffline;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)videoInteractiveViewWillShowBubbleView;
- (void)videoInteractiveViewTapWithStickerShow;
- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidEndShowing;
- (void)componentViewWillAppear:(BOOL)a0;
- (void)componentViewWillDisappear:(BOOL)a0;
- (void)componentViewLayoutSubviews;
- (void)updateWithChunkModel:(id)a0;
- (id)receiveProtocolList;
- (id)getVideoInformation:(id)a0;
- (void)applyStickerInfo:(id)a0;
- (void)updateStickerWithModel:(id)a0;
- (void)didChangePlaybackStateWithPlayer:(id)a0 playBackAction:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end

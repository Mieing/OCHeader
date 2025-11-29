@class NSTimer, IESECLiveContext;

@interface IESECLiveEnterRoomUtil : NSObject

@property (nonatomic) BOOL showingMask;
@property (retain, nonatomic) NSTimer *hideMaskTimer;
@property (weak, nonatomic) IESECLiveContext *liveContext;

- (void)hideMask;
- (void)showMask;
- (BOOL)isPreStream;
- (void)trackPreviewModuleShow:(id)a0;
- (void)trackPreviewModuleClick:(id)a0;
- (void)closeMaskViewWithClickOnBlankArea:(BOOL)a0;
- (id)keyForScene:(unsigned long long)a0;
- (id)getEnterRoomParamsWithScene:(unsigned long long)a0;
- (void)clearParamsWithScene:(unsigned long long)a0;
- (void)saveRoomParamsWithScene:(unsigned long long)a0 params:(id)a1;
- (void)enterRoomWithClickParams:(id)a0;
- (void)tryShowMask;
- (void)insureShowMask;
- (id)observeIESLivePipActions:(id)a0;
- (void)trackPreviewModuleShowShopCart;
- (void)trackPreviewModuleClickShopCart;
- (void)trackPreviewModuleShowGoodsCard;
- (void)trackPreviewModuleClickGoodsCard;
- (BOOL)checkHasEnterRoomForJumpRequestAction:(id)a0;
- (id)shouldContinueJumpRequestAction;
- (BOOL)checkHasEnterRoomForGoodsListAction:(id)a0;
- (BOOL)shouldContinueGoodsListActionWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

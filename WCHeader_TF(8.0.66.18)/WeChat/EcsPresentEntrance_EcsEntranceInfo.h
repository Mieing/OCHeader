@class EcsJumpInfo;

@interface EcsPresentEntrance_EcsEntranceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) EcsJumpInfo *jumpInfo;
@property (retain, nonatomic) EcsJumpInfo *chooseProductJumpInfo;
@property (retain, nonatomic) EcsJumpInfo *changeProductJumpInfo;
@property (retain, nonatomic) EcsJumpInfo *changeProductCountJumpInfo;
@property (retain, nonatomic) EcsJumpInfo *changeSkuJumpInfo;
@property (retain, nonatomic) EcsJumpInfo *submitPresentOrderJumpInfo;
@property (retain, nonatomic) EcsJumpInfo *orderPriceDetailJumpInfo;
@property (retain, nonatomic) EcsJumpInfo *preloadChooseProductJumpInfo;
@property (nonatomic) unsigned int showReddotType;
@property (nonatomic) unsigned int shouldPreloadImg;
@property (nonatomic) unsigned int reddotVersion;
@property (nonatomic) unsigned int shouldShowCover;

+ (void)initialize;

- (void)setShouldShowCover:(unsigned int)a0;
- (unsigned int)shouldShowCover;
- (void)setReddotVersion:(unsigned int)a0;
- (unsigned int)reddotVersion;
- (void)setShouldPreloadImg:(unsigned int)a0;
- (unsigned int)shouldPreloadImg;
- (void)setShowReddotType:(unsigned int)a0;
- (unsigned int)showReddotType;
- (void)setPreloadChooseProductJumpInfo:(id)a0;
- (id)preloadChooseProductJumpInfo;
- (void)setOrderPriceDetailJumpInfo:(id)a0;
- (id)orderPriceDetailJumpInfo;
- (void)setSubmitPresentOrderJumpInfo:(id)a0;
- (id)submitPresentOrderJumpInfo;
- (void)setChangeSkuJumpInfo:(id)a0;
- (id)changeSkuJumpInfo;
- (void)setChangeProductCountJumpInfo:(id)a0;
- (id)changeProductCountJumpInfo;
- (void)setChangeProductJumpInfo:(id)a0;
- (id)changeProductJumpInfo;
- (void)setChooseProductJumpInfo:(id)a0;
- (id)chooseProductJumpInfo;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;

@end

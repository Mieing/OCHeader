@class MMFinderLiveShopContext_HintModel, MMFinderLiveTask, MMFinderLiveTaskId, FinderReplayRecordSetting, FinderWxAppInfo, FinderLiveShopCustomerServiceInfo, MMFinderLiveShopContext_AnchorFlashSaleConfig, NSString, MMFinderLiveGoodsItem, MMFinderLiveECHotSaleLikeAnimationCenter, MMFinderLiveShopContext_AddProductsModel, FinderShopShelfOrderSetting, FinderLiveGetShopShelfResponse_ShopVipInfo;

@interface MMFinderLiveShopContext : NSObject

@property (retain, nonatomic) MMFinderLiveShopContext_AddProductsModel *addProductsModel;
@property (retain, nonatomic) MMFinderLiveGoodsItem *currPromotingGoodsItem;
@property (retain, nonatomic) MMFinderLiveECHotSaleLikeAnimationCenter *hotSaleLikeAnimationCenter;
@property (nonatomic) BOOL isAskForPromotingOpen;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveTask *liveTask;
@property (nonatomic) BOOL hasBeenInitByShopShelfInfo;
@property (retain, nonatomic) FinderWxAppInfo *shopAssistApp;
@property (retain, nonatomic) NSString *shopRequestId;
@property (retain, nonatomic) NSString *ecSource;
@property (retain, nonatomic) FinderReplayRecordSetting *replayRecordSetting;
@property (nonatomic) int replaySwitch;
@property (nonatomic) int replayType;
@property (retain, nonatomic) MMFinderLiveShopContext_AnchorFlashSaleConfig *anchorFlashSaleConfig;
@property (nonatomic) unsigned long long extFlag;
@property (retain, nonatomic) FinderWxAppInfo *shoppingCartAppInfo;
@property (retain, nonatomic) FinderLiveShopCustomerServiceInfo *customerServiceInfo;
@property (retain, nonatomic) FinderShopShelfOrderSetting *shopShelfOrderSetting;
@property (nonatomic) BOOL canUsePreHotOrLiveExclusivePrice;
@property (readonly, nonatomic) BOOL canShowPreHotOrShowPrice;
@property (retain, nonatomic) FinderWxAppInfo *orderCenterApp;
@property (retain, nonatomic) FinderLiveGetShopShelfResponse_ShopVipInfo *shopVIPInfo;
@property (retain, nonatomic) MMFinderLiveShopContext_HintModel *hintModel;

- (void)updateWithShopShelfInfo:(id)a0;
- (void)updateWithAppMessageAnchorFlashSaleConfigInfo:(id)a0;
- (void)updateWithJoinLiveContext:(id)a0;
- (void)updateCurrPromotingGoodsItem:(id)a0;
- (BOOL)isReplayRecordEnabled;
- (BOOL)isReplaySwitchOpen;
- (BOOL)isAutoReplayRecording;
- (id)description;
- (void).cxx_destruct;

@end

@class MMFinderLiveShopShelfCoordinator, NSString, MMFinderLiveTaskId, MMFinderLiveShopContext, NSDate, MMFinderLiveGoodsItem;
@protocol MMFinderLiveGoodsViewModelDelegate;

@interface MMFinderLiveGoodsViewModel : NSObject <WCFinderLiveLogReportValueProvider, MMFinderLiveShopShelfItemViewModelProtocol, MMFinderLiveShopShelfManagedItemViewModelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long listType;
@property (retain, nonatomic) NSString *searchKeyword;
@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *shopShelfCoordinator;
@property (weak, nonatomic) id<MMFinderLiveGoodsViewModelDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveGoodsItem *goodsItem;
@property (readonly, nonatomic) BOOL needActionButton;
@property (readonly, nonatomic) BOOL needReplayButton;
@property (nonatomic) BOOL showPromoteActionButton;
@property (readonly, nonatomic) MMFinderLiveShopContext *shopContext;
@property (retain, nonatomic) NSDate *willShineBefore;
@property (nonatomic) BOOL isInGoodsWithCouponsList;
@property (nonatomic) BOOL alwaysHideSerialNumber;
@property (nonatomic) BOOL showHotSaleCounts;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) BOOL isAddToLikeFromMenuButton;
@property (readonly, nonatomic) BOOL willDisplayInvalidReplayTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)finderLiveLogReportValueForKey:(id)a0;
- (void)onLittleTailClicked;
- (void)onAnchorShowBoxItemClicked:(id)a0;
- (id)init;
- (id)liveTask;
- (void)onGetFinderLiveAppMsgShopInfoWithTaskId:(id)a0 shopInfo:(id)a1;
- (void)onSubInfosViewClicked;
- (void)onPreHotButtonClicked;
- (void)onShowPriceButtonClicked;
- (BOOL)isPromoting;
- (void)setIsPromoting:(BOOL)a0;
- (id)productReplayInfo;
- (id)idUnit;
- (void).cxx_destruct;

@end

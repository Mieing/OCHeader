@class IESLiveGiftPanelDisplayConfiguration, NSString, NSDate, _TtC18IESLiveRevenueImpl29IESLiveRebornGiftPanelContext;
@protocol IESLiveInternalRouter, IESLiveGiftPanelViewModelHelperDelegate, IESLivePropBindingAlarmAPI, IESLivePopularCardAPI, HTSLiveSendGiftActions, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftPanelViewModelSendGiftHelper : NSObject <IESHYControllerDelegate>

@property (retain, nonatomic) id<HTSLiveSendGiftActions> sendDispatcher;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLivePopularCardAPI> popularCardAPI;
@property (retain, nonatomic) id<IESLivePropBindingAlarmAPI> propBindingAlarmApi;
@property (nonatomic) BOOL isEnterPopCard;
@property (nonatomic) BOOL enableGiftPriceLimitOpt;
@property (nonatomic) long long giftLargePriceLimit;
@property (retain, nonatomic) _TtC18IESLiveRevenueImpl29IESLiveRebornGiftPanelContext *context;
@property (retain, nonatomic) IESLiveGiftPanelDisplayConfiguration *configuration;
@property (retain, nonatomic) NSDate *lastTrackTimeGiftSendFirstTime;
@property (weak, nonatomic) id<IESLiveGiftPanelViewModelHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)iesHYController:(id)a0 didFinishLoadWithError:(id)a1;
- (void)didSendItem:(id)a0 transaction:(id)a1 dynamicParams:(id)a2 baseCount:(long long)a3 params:(id)a4;
- (void)sendCurrentSelectedItemWithRealToSendItem:(id)a0 currentSelectedItemImageURL:(id)a1 fetchGiftListLogID:(id)a2 selectedCollectionViewModel:(id)a3 trackerCommonParams:(id)a4 aiResortInfo:(id)a5 pageType:(long long)a6 onSearch:(BOOL)a7;
- (BOOL)p_shouldSkipDiamondCheck;
- (BOOL)hasPlentyDiamand:(unsigned long long)a0;
- (void)p_sendPopularityCardGiftWithItem:(id)a0;
- (BOOL)hasPlentyMissionCurrency:(unsigned long long)a0;
- (void)trackPropStatusWithAssetItem:(id)a0;
- (BOOL)propCouldSendWithAssetItem:(id)a0;
- (void)p_showMessageBoardGiftPanelWithItem:(id)a0;
- (id)getfirstSendSuccFromGiftPanelTimeIntervalStr;
- (void)p_enterPopularityCardViewWithItem:(id)a0 needShowLocationOption:(BOOL)a1 cityCode:(id)a2;
- (void)trackPopularityCardClickWithCount:(id)a0 continueTime:(id)a1;
- (void)sendCurrentSelectedItemFromSource:(id)a0 params:(id)a1;
- (BOOL)prepareForSend:(id)a0 params:(id)a1;
- (void)sendSelectedItem:(id)a0 params:(id)a1;
- (void)sendGift:(id)a0 params:(id)a1;
- (BOOL)showConfirmAlertWithGift:(id)a0 interceptTracker:(id)a1 params:(id)a2;
- (void)trackClickUnlockGiftWithGiftID:(id)a0 extraParams:(id)a1 params:(id)a2;
- (void)lackOfDiamand:(long long)a0 interceptTracker:(id)a1 params:(id)a2;
- (BOOL)openSchemaInfoForPropIfNeededWithParams:(id)a0;
- (BOOL)validateWillSendGiftPriceLimitAlertWithPanelViewSelectedItem:(id)a0 selectedItem:(id)a1 interceptTracker:(id)a2 params:(id)a3;
- (void)realSendGiftWithPanelViewSelectedItem:(id)a0 selectedItem:(id)a1 interceptTracker:(id)a2 params:(id)a3;
- (long long)showRedeemAlertFromType;
- (void)showLackOfBanlance:(long long)a0 params:(id)a1;
- (void)appendExtraParamsWithConfig:(id)a0 giftItem:(id)a1 params:(id)a2;
- (void)showBigGiftContinueViewWithTransaction:(id)a0 dynamicParams:(id)a1 baseCount:(long long)a2 params:(id)a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 configuration:(id)a1;
- (id)currentRoom;

@end

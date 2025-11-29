@class NSString, IESLiveGiftPanelDataSharing, NSArray, NSDictionary, NSNumber, _TtC18IESLiveRevenueImpl29IESLiveRebornGiftPanelContext;
@protocol IESLiveGiftListActions;

@interface IESLiveRevenueImpl.IESLiveRebornGiftPanelViewModel : IESLiveRevenueImpl.IESLiveRebornGiftDCEventDataModel <IESLiveGiftPanelViewModelProtocol, IESLiveGiftPanelReaction> {
    void /* unknown type, empty encoding */ configuaration;
    void /* unknown type, empty encoding */ coreTimePoint;
    void /* unknown type, empty encoding */ appearTime;
    void /* unknown type, empty encoding */ hasShowExpirePromptIfNeeded;
    void /* unknown type, empty encoding */ giftPanelDismiss;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageMonitorHelper;
    void /* function */ propRefId;
    void /* function */ backgroundImageUrlList;
    void /* function */ faceGiftText;
    void /* function */ clientAIGifts;
    void /* function */ updateGiftPanelTopTip;
    void /* function */ searchGift;
    void /* function */ updateDynamicBackgroundImage;
    void /* function */ handleSendGiftError;
    void /* function */ handleSelectGiftError;
    void /* function */ showGiftBanner;
    void /* function */ removeGiftBanner;
    void /* function */ refreshGiftBannerHybrid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legacyGiftPanelDataSharing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topModeStore;
    void /* unknown type, empty encoding */ currentCollectionVMs;
    void /* unknown type, empty encoding */ displayListChangeForTracker;
    void /* unknown type, empty encoding */ defaultSelectDataForTracker;
    void /* unknown type, empty encoding */ showEndTrackerParams;
    void /* unknown type, empty encoding */ currentSelectedGiftItem;
    void /* unknown type, empty encoding */ giftStructCache;
}

@property (nonatomic, readonly) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic, readonly) id<IESLiveGiftListActions> giftListDispatcher;
@property (nonatomic, readonly) _TtC18IESLiveRevenueImpl29IESLiveRebornGiftPanelContext *context;
@property (nonatomic, retain) NSNumber *preSelectGiftId;
@property (nonatomic) long long preSelectPageType;
@property (nonatomic) BOOL isDefaultSelect;
@property (nonatomic) BOOL isEmptyPage;
@property (nonatomic, copy) NSString *propRefId;
@property (nonatomic, copy) NSArray *backgroundImageUrlList;
@property (nonatomic) long long panelVMType;
@property (nonatomic) BOOL shouldShowFaceTip;
@property (nonatomic, copy) NSString *faceGiftText;
@property (nonatomic, copy) NSDictionary *clientAIGifts;
@property (nonatomic, copy) id /* block */ updateGiftPanelTopTip;
@property (nonatomic, copy) id /* block */ searchGift;
@property (nonatomic, copy) id /* block */ updateDynamicBackgroundImage;
@property (nonatomic, copy) id /* block */ handleSendGiftError;
@property (nonatomic, copy) id /* block */ handleSelectGiftError;
@property (nonatomic) BOOL shouldRequestExtra;
@property (nonatomic, copy) id /* block */ showGiftBanner;
@property (nonatomic, copy) id /* block */ removeGiftBanner;
@property (nonatomic, copy) id /* block */ refreshGiftBannerHybrid;

+ (id)defaultGiftIdWithDataSharing:(id)a0 configurationPageType:(long long)a1;

- (void)giftPanelDidShow;
- (void)selectGiftItemWithId:(id)a0 isPreSelect:(BOOL)a1 pageType:(long long)a2 forceUsePageType:(BOOL)a3 changePage:(BOOL)a4 allTopic:(BOOL)a5 callback:(id /* block */)a6;
- (void)performPreSelectGiftActionwithChangePage:(BOOL)a0 type:(long long)a1 callBack:(id /* block */)a2;
- (void)giftPanelWillShow;
- (void)giftPanelWillHide;
- (id)giftItemWithGiftID:(id)a0 pageType:(unsigned long long)a1 scanFromFirstPageTypeIfNotFound:(BOOL)a2 allTopic:(BOOL)a3;
- (void)selectGiftItemWithId:(id)a0 pageType:(long long)a1 completionBlock:(id /* block */)a2;
- (void)updateWithClientAIGift:(id)a0;
- (void)updateDefaultSelectItemWithGiftId:(id)a0;
- (id)requirePanelGiftList:(id)a0;
- (void)mergeLatestGiftPanelData:(id)a0 recipientChanged:(BOOL)a1 dataMergeCompletion:(id /* block */)a2 giftPreSelectCompletion:(id /* block */)a3;
- (void)appendGiftListWithGiftModels:(id)a0 forPageType:(id)a1 requestGiftIds:(id)a2;
- (void)appendGiftListEmptyWithPageType:(id)a0 requestGiftIds:(id)a1;
- (void)showGiftBannerIfNeeded;
- (id)selectedCollectionViewModel;
- (long long)pageItemListCountFromVMWithPageType:(unsigned long long)a0;
- (BOOL)isPageExistWithPageType:(unsigned long long)a0;
- (id)currentSelectGiftItem;
- (id)panelGiftStructWithGiftId:(id)a0;
- (void)updateFirstChargeBanner;
- (void)sendCurrentSelectedItem;
- (void)changeTabWithIndex:(unsigned long long)a0 active:(BOOL)a1;
- (void)initTabWithIndex:(unsigned long long)a0;
- (void)hidePanel:(BOOL)a0;
- (void)willShowWithDuration:(double)a0 panelHeight:(float)a1;
- (void)willHideWithDuration:(double)a0 animated:(BOOL)a1;
- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 configuration:(id)a1;

@end

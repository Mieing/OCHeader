@class WCShareCardBatchGetMgr, NSString, NSArray, LocationRetriever, WCNewShareCardLayoutCache, NSMutableDictionary, WCShareCardDB, CLLocation, WCShareCardSyncMgr;

@interface WCShareCardMgr : MMUserService <MMServiceProtocol, WCShareCardSyncMgrDelegate, WCShareCardBatchGetMgrDelegate, PBMessageObserverDelegate, LocationRetrieveDelegate, MMKernelExt> {
    WCShareCardDB *_wcShareCardDB;
    WCShareCardSyncMgr *_wcShareCardSyncMgr;
    WCShareCardBatchGetMgr *_wcShareCardBatchGetMgr;
    LocationRetriever *_locationRetrieve;
    unsigned int _lastLocationTime;
    unsigned int uiLastMarkShareCardEventID;
    NSString *_curHomePageLayoutBuff;
    BOOL _bIsLocalCityLayoutEnd;
    BOOL _bIsOtherCityLayoutEnd;
    BOOL _bIsHomePageFirstPageData;
    NSMutableDictionary *_dicCardForMask;
    WCNewShareCardLayoutCache *_shareCardLayoutCache;
}

@property (readonly, nonatomic) WCNewShareCardLayoutCache *shareCardLayoutCache;
@property (retain, nonatomic) NSArray *arrNeedAnimtionCardData;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)loadShareCardLayoutCache;
- (BOOL)hasShareCardLayoutCacheData;
- (void)saveShareCardLayoutCacheWithLoacalList:(id)a0 otherCityList:(id)a1 cityName:(id)a2 entryTip:(id)a3 entryIcons:(id)a4 entryShowRedDot:(BOOL)a5 entryShowNew:(BOOL)a6;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)insertOrUpdateWCCard:(id)a0;
- (BOOL)needShowShareCardEntrance;
- (void)onAuthOK;
- (void)shareCardWithWhoCanSee:(id)a0 visibleUserList:(id)a1 invisibleUserList:(id)a2 visibleTagIDList:(id)a3 invisibleTagIDList:(id)a4;
- (void)shareCardGetReward:(id)a0 BrandUsername:(id)a1 ConsumedBoxID:(id)a2 visibleUserList:(id)a3 invisibleUserList:(id)a4 visibleTagIDList:(id)a5 invisibleTagIDList:(id)a6;
- (void)shareCardListToFriend:(id)a0 consumedboxCardId:(id)a1 visibleUserList:(id)a2 invisibleUserList:(id)a3 visibleTagIDList:(id)a4 invisibleTagIDList:(id)a5 staticScene:(unsigned long long)a6;
- (void)getShareCardsHomePageLayout;
- (BOOL)getShareCardsHomePageLayoutMore;
- (void)getShareCardsHomePageLayoutInternal;
- (void)startRetrieveLocation;
- (void)stopRetrieveLocation;
- (void)tagCardHasBeenRed;
- (unsigned int)getShareCardCount;
- (unsigned int)getShareCardAvailableCount;
- (void)clearSyncKey;
- (void)doSync;
- (void)shareCardConsumed:(id)a0 fromScene:(unsigned int)a1 withCode:(id)a2;
- (unsigned int)getValidShareCardCount:(id)a0;
- (unsigned int)getShareCardCount:(id)a0;
- (id)getShareCardByCardIdFromDB:(id)a0;
- (void)getShareCardFromSvr:(id)a0;
- (BOOL)getShareCardByCardTpIdFromDB:(id)a0 andShareCardList:(id)a1;
- (void)deleteShareCardByCardIdFromDB:(id)a0;
- (void)markShareCardByCardId:(id)a0 mark:(BOOL)a1 notify:(BOOL)a2 scene:(int)a3;
- (void)internalMarkShareCard:(id)a0;
- (void)keepCachedDataFromOldCard:(id)a0 toNewCard:(id)a1;
- (void)handleOnGetMarkShareCardResp:(id)a0 Event:(unsigned int)a1;
- (void)handleOnGetShareCardItemResp:(id)a0;
- (void)handleOnGetShareCardConsumedInfoResp:(id)a0;
- (void)handleOnGetHomePageLayoutResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onWCShareCardSyncEnd;
- (void)onBatchGetShareCardList:(id)a0 ErrCode:(int)a1;
- (void)onBatchGetEnd:(unsigned int)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (BOOL)shouldResetLocation;
- (void)saveShareCardsToDB:(id)a0;
- (void).cxx_destruct;

@end

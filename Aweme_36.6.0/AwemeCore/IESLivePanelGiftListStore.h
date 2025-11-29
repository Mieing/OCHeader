@class IESLiveRoomGiftListMonitor, NSMutableDictionary, NSDictionary, RACSubject, HTSLiveRoomGiftDataModel, NSString, HTSLiveRoomGiftPagesDataModel;
@protocol IESLiveGiftAPI, IESLiveRoomService, IESLiveGiftModuleGiftListInterface;

@interface IESLivePanelGiftListStore : NSObject <IESLivePanelGiftListProtocol>

@property (retain, nonatomic) id<IESLiveGiftAPI> giftApi;
@property (copy, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSLiveRoomGiftPagesDataModel *pagesModel;
@property (retain, nonatomic) NSMutableDictionary *otherUserGiftListCache;
@property (retain, nonatomic) NSMutableDictionary *otherUserGiftPagesDictionary;
@property (retain, nonatomic) HTSLiveRoomGiftPagesDataModel *allMicGiftPagesModel;
@property (retain, nonatomic) NSDictionary *allMicGiftListCache;
@property (retain, nonatomic) RACSubject *giftListFetchedSubject;
@property (retain, nonatomic) RACSubject *giftListAppendedSubject;
@property (retain, nonatomic) RACSubject *giftSortStrategySubject;
@property (retain, nonatomic) RACSubject *giftListFetchFailedSubject;
@property (weak, nonatomic) id<IESLiveGiftModuleGiftListInterface> giftListInterface;
@property (retain, nonatomic) IESLiveRoomGiftListMonitor *monitor;
@property (retain, nonatomic) HTSLiveRoomGiftDataModel *roomGiftListData;
@property (nonatomic) double timeIntervalWithServer;
@property (copy, nonatomic) NSString *fetchGiftListLogID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onGiftListStrategyChanged;
- (id)giftSortStrategyForOtherUser:(id)a0 allMic:(BOOL)a1;
- (id)giftWithId:(id)a0 forOtherUser:(id)a1 allMic:(BOOL)a2 freeDisplayIndex:(long long)a3 pageType:(unsigned long long)a4 needCheckResourceReady:(BOOL)a5 isPushStreamUser:(BOOL)a6 trackerScene:(id)a7;
- (id)getSupportGiftWithOtherRoomUser:(id)a0 currentRoomOwnUser:(id)a1 giftId:(id)a2 isSendBySelf:(BOOL)a3 shouldCheckRequiredAssets:(BOOL)a4 trackerScene:(id)a5;
- (id)supportGiftWithMsg:(id)a0 currentRoomOwnUser:(id)a1 trackerScene:(id)a2;
- (void)fetchInteractiveGiftListLinkParams:(id)a0 pageType:(id)a1 completion:(id /* block */)a2;
- (void)fetchInteractiveGiftListIncrementallyLinkParams:(id)a0 pageType:(id)a1 completion:(id /* block */)a2;
- (void)clearInteractiveGiftLists;
- (void)insertGift:(id)a0 forOtherUser:(id)a1 allMic:(BOOL)a2 inPage:(unsigned long long)a3;
- (void)removeGift:(id)a0 forOtherUser:(id)a1 allMic:(BOOL)a2 inPage:(unsigned long long)a3;
- (void)clearInteractiveCacheExceptOnlineUsers:(id)a0;
- (id)onGiftListFetchFailed;
- (id)onGiftListAppended;
- (id)onGiftListFetched;
- (id)giftPagesForOtherUser:(id)a0 allMic:(BOOL)a1;
- (id)giftWithId:(id)a0 forOtherUser:(id)a1 allMic:(BOOL)a2 freeDisplayIndex:(long long)a3 pageType:(unsigned long long)a4 needCheckResourceReady:(BOOL)a5 isPushStreamUser:(BOOL)a6;
- (void)subscribeEvent;
- (id)initWithRoomModel:(id)a0 diContext:(id)a1;
- (id)giftWithId:(id)a0 forOtherUser:(id)a1;
- (id)getSupportGiftFromOtherUser:(id)a0 giftId:(id)a1;
- (id)giftListCacheFromPages:(id)a0 forOtherUser:(id)a1;
- (BOOL)needUpdateGiftLiftStrategyWithFetchMomentType:(long long)a0;
- (void)setTimeIntervalWithServerFromResponse:(id)a0;
- (void)processIncrementalGiftListModel:(id)a0 forOtherUser:(id)a1 pageType:(id)a2 requestGiftIDs:(id)a3 extraDict:(id)a4 fetchGiftListScene:(unsigned long long)a5;
- (void)processGiftListModel:(id)a0 forOtherUser:(id)a1 extraDict:(id)a2 fetchGiftListScene:(unsigned long long)a3 linkParams:(id)a4;
- (id)appendGiftListCacheForPage:(id)a0 requestGiftIDs:(id)a1 forOtherUser:(id)a2;
- (id)legacyGiftManager;
- (id)legacyPanelGiftListManager;
- (void).cxx_destruct;

@end

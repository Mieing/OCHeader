@class NSMutableArray, NSString, HTSLiveEpisode, GiftListResponse_Data, IESLiveVSFetchNewGiftTaskThrottle, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveVSGiftListAPI;

@interface IESLiveVSGiftListManager : NSObject <IESLiveVSFetchNewGiftTaskThrottleDelegate>

@property (retain, nonatomic) id<IESLiveVSGiftListAPI> api;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) GiftListResponse_Data *cachedGiftListModel;
@property (retain, nonatomic) IESLiveVSFetchNewGiftTaskThrottle *taskThrottle;
@property (nonatomic) BOOL isFetchingNewGift;
@property (retain, nonatomic) NSMutableArray *giftListUpdatedBlocks;
@property (retain, nonatomic) NSMutableArray *giftsInfoUpdatedBlocks;
@property (copy, nonatomic) NSString *cachedGiftListLogID;
@property (nonatomic) long long giftListTabCount;
@property (nonatomic) double preSaveGiftToKVStoreTime;
@property (nonatomic) double saveTimeInterval;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSLiveEpisode *itemRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleUnionTask:(id)a0;
- (id)giftWithGiftID:(id)a0;
- (void)receivedNewGift:(id)a0 completion:(id /* block */)a1;
- (void)registerGiftListUpdatedBlock:(id /* block */)a0;
- (id)currentGiftListModel;
- (id)currentGiftListLogID;
- (void)fetchGiftListFromScene:(long long)a0 completion:(id /* block */)a1;
- (void)registerGiftsInfoUpdatedBlock:(id /* block */)a0 shouldSkipFirst:(BOOL)a1;
- (id)currentGiftsInfo;
- (void)p_loadLocalData;
- (void)fetchGiftListFromScene:(long long)a0 secGuestID:(id)a1 completion:(id /* block */)a2;
- (void)ts_fetchGiftListWithParams:(id)a0 duration:(id)a1 error:(id)a2;
- (BOOL)listDataIsValid:(id)a0;
- (id)p_giftsInfo;
- (void)asyncSaveGiftListModel:(id)a0;
- (id)p_giftWithGiftID:(id)a0;
- (void)p_receivedNewGift:(id)a0 completion:(id /* block */)a1;
- (void)p_loadLocalGiftListModelWithCompletion:(id /* block */)a0;
- (id)p_giftList;
- (void)scheduleFetchNewGiftTask:(id)a0;
- (id)initWithVSComponentContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

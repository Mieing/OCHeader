@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol IESLiveGiftDetailAPI;

@interface IESLiveGiftDataManager : NSObject <IESLiveGiftDataRouter>

@property (retain, nonatomic) id<IESLiveGiftDetailAPI> giftDetailAPI;
@property (retain, nonatomic) NSObject *fetchTaskToken;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) NSMutableArray *fetchTasks;
@property (retain, nonatomic) NSMutableDictionary *fetchedGiftDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (id)giftWithId:(id)a0;
- (void)fetchGiftDataWithIDList:(id)a0 liveRoomModel:(id)a1 scene:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)checkSupportGift:(id)a0;
- (id)giftWithId:(id)a0 needCheckEffectReady:(BOOL)a1;
- (id)getGiftById:(id)a0;
- (BOOL)checkGiftResourceReadyById:(id)a0;
- (void)scheduleFetchGiftDataTask;
- (void).cxx_destruct;

@end

@class NSArray;

@interface WCFinderLiveStreamGetAsyncLoadInfoCGI : WCFinderLiveBaseCgi

@property (nonatomic) int triggerScene;
@property (nonatomic) long long reportScene;
@property (retain, nonatomic) NSArray *scenesArray;
@property (copy, nonatomic) id /* block */ successful;
@property (copy, nonatomic) id /* block */ failure;

- (id)initWithObjectUidList:(id)a0 aggregationCardIdList:(id)a1 cardInfoList:(id)a2 fetchLiveRoomInfoList:(id)a3 fetchInteractionEntryCardList:(id)a4 scenes:(id)a5 commentScene:(int)a6 triggerScene:(int)a7 reportScene:(long long)a8 successful:(id /* block */)a9 failure:(id /* block */)a10;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

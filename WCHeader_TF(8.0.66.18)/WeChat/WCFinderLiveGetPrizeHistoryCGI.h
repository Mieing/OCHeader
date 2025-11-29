@class NSString, NSData;

@interface WCFinderLiveGetPrizeHistoryCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *anchorFinderUserName;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) long long liveScene;

- (id)initWithLiveId:(unsigned long long)a0 liveTaskId:(id)a1 objectId:(unsigned long long)a2 nonceId:(id)a3 finderUserName:(id)a4 lastBuffer:(id)a5 liveScene:(long long)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

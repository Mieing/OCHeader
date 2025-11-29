@class NSString, NSData;

@interface WCFinderLiveGetLotteryRecordCGI : WCFinderLiveBaseCgi

@property (nonatomic) long long opType;
@property (copy, nonatomic) NSString *lotteryId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (copy, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) BOOL isAudience;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithOpType:(long long)a0 liveTaskId:(id)a1 lotteryId:(id)a2 liveId:(unsigned long long)a3 objectId:(unsigned long long)a4 objectNonceId:(id)a5 finderUserName:(id)a6 isAudience:(BOOL)a7 lastBuffer:(id)a8 liveCookies:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (id)initWithOpType:(long long)a0 liveTaskId:(id)a1 lotteryId:(id)a2 finderDataItem:(id)a3 finderUserName:(id)a4 lastBuffer:(id)a5 liveCookies:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

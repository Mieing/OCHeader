@class NSString, MMFinderLiveTaskId, NSData, NSMutableArray;

@interface MMLiveAttendVoteCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSMutableArray *choiceIds;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSData *cookies;
@property (retain, nonatomic) NSString *votingId;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFinderTaskId:(id)a0 objectId:(unsigned long long)a1 nonceId:(id)a2 choiceIds:(id)a3 cookies:(id)a4 votingId:(id)a5 successBlock:(id /* block */)a6 failBlock:(id /* block */)a7;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

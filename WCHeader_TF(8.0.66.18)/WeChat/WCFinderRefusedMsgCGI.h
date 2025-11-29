@class NSString;

@interface WCFinderRefusedMsgCGI : WCFinderBaseCgi

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL isSwitchOn;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) BOOL refuseObjectIsFinder;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithRefusedMsgSwitchState:(BOOL)a0 userName:(id)a1 sessionId:(id)a2 refuseObjectIsFinder:(BOOL)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

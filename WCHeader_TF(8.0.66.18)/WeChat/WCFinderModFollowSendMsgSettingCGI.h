@class NSString;

@interface WCFinderModFollowSendMsgSettingCGI : WCFinderBaseCgi

@property (nonatomic) BOOL isSwitchOn;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithFollowSendMsgSwitchState:(BOOL)a0 userName:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

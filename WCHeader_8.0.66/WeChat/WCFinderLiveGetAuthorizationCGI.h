@class NSString, NSData;

@interface WCFinderLiveGetAuthorizationCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *deviceId;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *gameUserId;
@property (nonatomic) unsigned int platform;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isReject;

- (id)initWithFinderUsername:(id)a0 deviceId:(id)a1 ticket:(id)a2 appId:(id)a3 scene:(unsigned long long)a4 isReject:(BOOL)a5 platform:(unsigned int)a6 gameUserId:(id)a7 successBlock:(id /* block */)a8 failBlock:(id /* block */)a9;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

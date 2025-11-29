@class NSData, NSString;

@interface WCFinderLiveGenPersonalMsgSessionInfoCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSString *toUserName;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 toUserName:(id)a1 sourceType:(unsigned int)a2 liveCookies:(id)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

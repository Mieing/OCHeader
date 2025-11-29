@class NSData, NSString;

@interface WCFinderLiveGetFloatMsgConfigCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) NSString *finderUserName;
@property (copy, nonatomic) NSString *anchorFinderUserName;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) id extraInfo;

- (id)initWithLiveTaskId:(id)a0 liveCookies:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (id)transferToFinderLiveFloatMsgList:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, NSData;

@interface WCFinderPostLiveMsgCGI : WCFinderLiveBaseCgi

@property (copy, nonatomic) NSString *msgContent;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) NSString *clientMsgId;
@property (nonatomic) int msgType;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int isFloatMsg;
@property (nonatomic) unsigned int pbFloatMsgType;
@property (copy, nonatomic) NSString *floatMsgProductId;

- (id)initWithFinderTaskId:(id)a0 msgContent:(id)a1 liveCookies:(id)a2 clientMsgId:(id)a3 msgType:(unsigned int)a4 selfNickName:(id)a5 extraInfo:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

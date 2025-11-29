@class NSString, CMessageWrap, RevokeMsgRequest;

@interface RevokeInfo : NSObject

@property (nonatomic) unsigned long long initTime;
@property (nonatomic) unsigned long long cost;
@property (nonatomic) long long result;
@property (retain, nonatomic) RevokeMsgRequest *request;
@property (nonatomic) long long type;
@property (nonatomic) long long processState;
@property (nonatomic) unsigned int counter;
@property (retain, nonatomic) NSString *nsChatName;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSString *revokeTicket;

+ (id)getMsgClientID:(id)a0;

- (id)initWithMsgWrap:(id)a0 ChatName:(id)a1 Counter:(unsigned int)a2 revokeTicket:(id)a3;
- (id)generateRevokeRequest;
- (void).cxx_destruct;

@end

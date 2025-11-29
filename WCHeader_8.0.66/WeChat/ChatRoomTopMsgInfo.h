@class NSString;

@interface ChatRoomTopMsgInfo : NSObject

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int topId;
@property (retain, nonatomic) NSString *opUserName;
@property (nonatomic) unsigned long long msgSvrID;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *msgSummary;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *msgUserName;
@property (nonatomic) BOOL isRevoke;
@property (nonatomic) unsigned int exposureTime;

- (id)genDBContactChatRoomTopMsg;
- (void)copyFromDBTopMsgInfo:(id)a0;
- (void)copyFromNetworkTopMsgInfo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

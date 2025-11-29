@class NSMutableArray, NSString, FinderLiveBoxId, NSData, FinderLiveAppMsgOption, FinderLiveContact;

@interface FinderLiveAppMsg : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveContact *toUserContact;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned long long quotedMsgSeq;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) FinderLiveAppMsgOption *option;
@property (retain, nonatomic) NSMutableArray *recipientContactList;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) FinderLiveBoxId *boxId;
@property (nonatomic) unsigned int isFloatmsg;
@property (nonatomic) unsigned int floatType;
@property (retain, nonatomic) NSString *referFloatProductId;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) FinderLiveContact *fromUserContact;
@property (retain, nonatomic) NSString *localClientMsgId;
@property (nonatomic) unsigned long long serverMsgVersion;
@property (nonatomic) unsigned long long liveId;

+ (void)initialize;

@end

@class TLRecCardUserInfo, NSString, TLRecCardBizInfo, NSMutableArray;

@interface TLRecCard : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardTitle;
@property (retain, nonatomic) TLRecCardBizInfo *bizInfo;
@property (retain, nonatomic) NSString *appMsgRecReason;
@property (retain, nonatomic) NSMutableArray *appMsg;
@property (retain, nonatomic) NSString *versionInfo;
@property (nonatomic) unsigned long long clientId;
@property (retain, nonatomic) TLRecCardUserInfo *recCardUserInfo;

+ (void)initialize;

@end

@class NSString;

@interface EcsGlobalMsgID : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *toUser;
@property (nonatomic) long long msgid;
@property (retain, nonatomic) NSString *msgidStr;
@property (nonatomic) unsigned long long ts;
@property (retain, nonatomic) NSString *snsFeedId;

+ (void)initialize;

@end

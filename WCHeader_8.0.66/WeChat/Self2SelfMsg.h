@class NSString, NSData;

@interface Self2SelfMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long fromUin;
@property (retain, nonatomic) NSString *toWxid;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int msgSubtype;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) unsigned long long msgId;
@property (retain, nonatomic) NSData *content;

+ (void)initialize;

@end

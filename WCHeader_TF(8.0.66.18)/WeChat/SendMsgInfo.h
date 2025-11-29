@class NSData;

@interface SendMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *content;
@property (nonatomic) int toMemberid;
@property (nonatomic) unsigned long long msgid;
@property (nonatomic) unsigned int timeout;

+ (void)initialize;

@end

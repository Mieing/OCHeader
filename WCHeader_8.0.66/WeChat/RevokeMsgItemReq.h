@class NSString;

@interface RevokeMsgItemReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long newmsgid;
@property (retain, nonatomic) NSString *climsgid;
@property (nonatomic) unsigned int newclimsgid;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int retryState;

+ (void)initialize;

@end

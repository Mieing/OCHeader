@class NSString;

@interface Channel : WXPBGeneratedMessage

@property (nonatomic) unsigned int channelId;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL readOnly;
@property (retain, nonatomic) NSString *cantSendReason;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long unreadMsgCount;

+ (void)initialize;

@end

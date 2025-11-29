@class NSString;

@interface MsgRemindExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long newMsgId;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int subMsgType;

+ (void)initialize;

@end

@class NSString, NSData;

@interface TopMsgInfoItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int topId;
@property (retain, nonatomic) NSString *opUserName;
@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *msgSummary;
@property (retain, nonatomic) NSString *msgUserName;
@property (retain, nonatomic) NSData *clientBuf;

+ (void)initialize;

@end

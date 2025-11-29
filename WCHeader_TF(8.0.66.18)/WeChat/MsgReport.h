@class NSString;

@interface MsgReport : WXPBGeneratedMessage

@property (nonatomic) int msgType;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end

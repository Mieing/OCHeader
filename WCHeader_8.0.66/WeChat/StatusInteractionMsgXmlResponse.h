@class NSString;

@interface StatusInteractionMsgXmlResponse : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMsg;
@property (nonatomic) int type;
@property (nonatomic) BOOL needNotifyRed;

+ (void)initialize;

@end

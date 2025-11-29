@class NSString, StatusIconAction;

@interface StatusIconActionResponse : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) StatusIconAction *iconAction;

+ (void)initialize;

@end

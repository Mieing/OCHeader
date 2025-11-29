@class NSString;

@interface StatusCommonResult : WXPBGeneratedMessage

@property (nonatomic) int errorType;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorDesc;

+ (void)initialize;

@end

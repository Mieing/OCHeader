@class NSString;

@interface TingErrorInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *module;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMessage;

+ (void)initialize;

@end

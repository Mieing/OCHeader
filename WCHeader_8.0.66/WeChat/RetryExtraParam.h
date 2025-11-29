@class NSString;

@interface RetryExtraParam : WXPBGeneratedMessage

@property (nonatomic) int retryBusiId;
@property (retain, nonatomic) NSString *idempotentId;
@property (retain, nonatomic) NSString *package;

+ (void)initialize;

@end

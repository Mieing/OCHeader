@class NSString;

@interface StatusInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) int offset;
@property (nonatomic) int count;
@property (nonatomic) long long timeLimitMs;
@property (nonatomic) BOOL skipCheckState;

+ (void)initialize;

@end

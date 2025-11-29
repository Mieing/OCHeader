@class NSString;

@interface AIWeAppProcessData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *processId;
@property (nonatomic) int styleType;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *appId;

+ (void)initialize;

@end

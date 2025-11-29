@class NSString;

@interface WenoteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *configDir;

+ (void)initialize;

@end

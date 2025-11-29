@class NSString, NSData;

@interface WCAudioModuleInfo : WXPBGeneratedMessage

@property (nonatomic) int scene;
@property (nonatomic) int priority;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSData *bizContext;

+ (void)initialize;

@end

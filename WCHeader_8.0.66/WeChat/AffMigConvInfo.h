@class NSString;

@interface AffMigConvInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *talker;
@property (nonatomic) long long firstTime;
@property (nonatomic) long long lastTime;
@property (nonatomic) long long estimatedSize;
@property (retain, nonatomic) NSString *displayName;

+ (void)initialize;

@end

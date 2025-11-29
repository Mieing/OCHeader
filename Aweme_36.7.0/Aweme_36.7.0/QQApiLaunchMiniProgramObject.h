@class NSString;

@interface QQApiLaunchMiniProgramObject : QQApiObject

@property (copy, nonatomic) NSString *miniAppID;
@property (copy, nonatomic) NSString *miniPath;
@property (nonatomic) unsigned long long miniprogramType;

- (void).cxx_destruct;
- (id)init;

@end

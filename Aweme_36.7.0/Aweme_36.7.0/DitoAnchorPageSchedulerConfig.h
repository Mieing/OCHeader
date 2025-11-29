@interface DitoAnchorPageSchedulerConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long stableCount;
@property (nonatomic) long long detectIntervale;

+ (id)settingConfig;

@end

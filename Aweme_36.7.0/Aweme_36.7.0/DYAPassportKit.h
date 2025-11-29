@protocol DYAPassportConfig;

@interface DYAPassportKit : NSObject

@property (class, readonly, nonatomic) id<DYAPassportConfig> config;

@property (retain, nonatomic) id<DYAPassportConfig> currentConfig;

+ (void)startWithConfig:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end

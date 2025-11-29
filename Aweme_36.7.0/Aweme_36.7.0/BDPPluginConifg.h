@class NSString;

@interface BDPPluginConifg : NSObject

@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL isDynamic;

+ (void)bootstrapLaunch;

- (void).cxx_destruct;

@end

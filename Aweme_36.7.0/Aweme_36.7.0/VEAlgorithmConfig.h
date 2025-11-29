@class NSString;

@interface VEAlgorithmConfig : NSObject

@property (copy, nonatomic) NSString *configPath;
@property (nonatomic) void /* function */ *resourceFinder;
@property (copy, nonatomic) NSString *tempRecPath;
@property (nonatomic) long long serviceCount;
@property (nonatomic) long long superParams;
@property (nonatomic) unsigned long long initType;

- (void).cxx_destruct;

@end

@class NSArray, NSString;

@interface NLECommonParam_OC : NLEBaseParam_OC

@property (nonatomic) long long frameType;
@property (copy, nonatomic) NSArray *imagePaths;
@property (nonatomic) long long extractFrameFPS;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *cacheDir;
@property (copy, nonatomic) NSString *configPath;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *modelDir;
@property (copy, nonatomic) NSArray *timeVectorUS;

- (void).cxx_destruct;
- (id)init;

@end

@class NSArray;

@interface ACCBitrateThresholdChecker : NSObject

@property (retain, nonatomic) NSArray *resolutionThresholds;

+ (id)shared;

- (void)checkVideoAtURL:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfigurationJSON:(id)a0;
- (void)checkVideoAsset:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end

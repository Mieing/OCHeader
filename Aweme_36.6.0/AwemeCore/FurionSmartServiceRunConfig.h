@class FurionSmartServiceInputData;

@interface FurionSmartServiceRunConfig : NSObject

@property (nonatomic) BOOL async;
@property (nonatomic) BOOL skipPredict;
@property (nonatomic) BOOL waitPackageLoadIfPossible;
@property (nonatomic) long long waitPackageLoadTimeMs;
@property (retain, nonatomic) FurionSmartServiceInputData *inputData;

- (void).cxx_destruct;
- (id)init;

@end

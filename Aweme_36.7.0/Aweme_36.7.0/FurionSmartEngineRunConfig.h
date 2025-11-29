@class FurionSmartEngineInputData;

@interface FurionSmartEngineRunConfig : NSObject

@property (nonatomic) unsigned long long callType;
@property (nonatomic) BOOL async;
@property (nonatomic) BOOL skipPredict;
@property (nonatomic) BOOL waitPackageLoadIfPossible;
@property (nonatomic) long long waitPackageLoadTimeMs;
@property (nonatomic) unsigned long long enginePrepareType;
@property (retain, nonatomic) FurionSmartEngineInputData *inputData;

- (void).cxx_destruct;
- (id)init;

@end

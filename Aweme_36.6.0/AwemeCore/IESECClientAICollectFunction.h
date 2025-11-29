@class NSArray, IESECFeatureCenterPerformanceTracker;
@protocol IESECClientAICustomCollectFunctionProtocol;

@interface IESECClientAICollectFunction : NSObject

@property (retain, nonatomic) NSArray *nativeCollectionFunctionNameList;
@property (retain, nonatomic) IESECFeatureCenterPerformanceTracker *performanceTracker;
@property (retain, nonatomic) NSArray<IESECClientAICustomCollectFunctionProtocol> *functions;

- (void)registerCustomFuncs;
- (BOOL)checkIfIsNativeFunctionWithFunctionName:(id)a0;
- (id)collectFeaturesWithFeatureSchemas:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

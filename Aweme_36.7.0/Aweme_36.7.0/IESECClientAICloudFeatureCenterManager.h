@class IESECClientAICloudFeatureCenterAPI;

@interface IESECClientAICloudFeatureCenterManager : NSObject

@property (retain, nonatomic) IESECClientAICloudFeatureCenterAPI *requestAPI;

- (void)uploadFeaturesThroughServerWithFeatureArray:(id)a0;
- (void)uploadFeaturesThroughAppLogWithFeatureArray:(id)a0;
- (void).cxx_destruct;

@end

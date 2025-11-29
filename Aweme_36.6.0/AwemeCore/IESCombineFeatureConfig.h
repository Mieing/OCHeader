@class IEFFeatureCenterConfig;

@interface IESCombineFeatureConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long range;
@property (nonatomic) long long excludeThis;
@property (retain, nonatomic) IEFFeatureCenterConfig *combinesConfig;

- (id)initWithJSONDict:(id)a0 enableCloudScore:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithJSONDict:(id)a0;

@end

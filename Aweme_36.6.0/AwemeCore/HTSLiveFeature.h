@class NSString, HTSLiveFeatureValue, HTSLiveNFA;

@interface HTSLiveFeature : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int featureSource;
@property (nonatomic) int featureTimeliness;
@property (nonatomic) int refreshInterval;
@property (retain, nonatomic) HTSLiveFeatureValue *featureValue;
@property (nonatomic) BOOL hasFeatureValue;
@property (nonatomic) int featureType;
@property (retain, nonatomic) HTSLiveNFA *nfaInfo;
@property (nonatomic) BOOL hasNfaInfo;

+ (id)descriptor;

- (id)featureValue;
- (id)name;
- (id)nfaInfo;
- (int)featureType;

@end

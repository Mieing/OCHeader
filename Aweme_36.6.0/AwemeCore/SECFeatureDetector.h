@protocol SECFeatureProtocol;

@interface SECFeatureDetector : NSObject {
    id<SECFeatureProtocol> _customFeature;
}

+ (void)setupWithFeatures:(id)a0;
+ (id)feature;
+ (id)shared;

- (void).cxx_destruct;

@end

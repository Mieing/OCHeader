@class NSString, AWECreativeToolsFeatureConfig;

@interface AWECreativeToolsBasicFeature : NSObject <AWECreativeToolsFeature>

@property (retain, nonatomic) AWECreativeToolsFeatureConfig *featureConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentClasses;
- (id)initWithFeatureConfig:(id)a0;
- (void).cxx_destruct;

@end

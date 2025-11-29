@interface EcsJumpInfo_FeatureInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int featureId;
@property (nonatomic) unsigned int minFeatureVersion;

+ (void)initialize;

- (void)setMinFeatureVersion:(unsigned int)a0;
- (unsigned int)minFeatureVersion;
- (void)setFeatureId:(unsigned int)a0;
- (unsigned int)featureId;

@end

@class NSDictionary, BDUGLuckyPersonalActivityCommon;

@interface BDUGLuckyPersonalActivityInfo : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckyPersonalActivityCommon *activityCommon;
@property (copy, nonatomic) NSDictionary *activityCustom;

+ (id)modelCustomPropertyMapper;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end

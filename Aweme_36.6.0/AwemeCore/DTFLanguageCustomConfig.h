@class NSDictionary, DTFLanguageCustomFaceConfig, DTFLanguageCustomGuideConfig;

@interface DTFLanguageCustomConfig : NSObject

@property (retain, nonatomic) DTFLanguageCustomGuideConfig *guideConfig;
@property (retain, nonatomic) DTFLanguageCustomFaceConfig *faceConfig;
@property (retain, nonatomic) NSDictionary *docConfig;

- (id)initWithString:(id)a0 type:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end

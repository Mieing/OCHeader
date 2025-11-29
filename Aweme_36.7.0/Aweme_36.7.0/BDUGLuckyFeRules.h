@class BDUGLuckyUrlReplaceRules, BDUGLuckyInjectRules;

@interface BDUGLuckyFeRules : BDUGLuckyBDModel

@property (retain, nonatomic) BDUGLuckyInjectRules *injectRules;
@property (retain, nonatomic) BDUGLuckyUrlReplaceRules *urlReplaceRules;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

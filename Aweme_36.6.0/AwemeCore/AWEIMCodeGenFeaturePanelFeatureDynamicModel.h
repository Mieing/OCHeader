@class NSString;

@interface AWEIMCodeGenFeaturePanelFeatureDynamicModel : AWEBaseDataModel

@property (nonatomic) int policy;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL isContentReplace;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

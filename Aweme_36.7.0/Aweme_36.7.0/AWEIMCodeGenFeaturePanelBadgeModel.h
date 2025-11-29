@class NSString;

@interface AWEIMCodeGenFeaturePanelBadgeModel : AWEBaseDataModel

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *kind;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWEIMCodeGenFeaturePanelIconRingModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) float progress;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

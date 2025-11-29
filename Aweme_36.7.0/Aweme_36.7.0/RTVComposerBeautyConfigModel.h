@class NSDictionary;

@interface RTVComposerBeautyConfigModel : JSONModel

@property (copy, nonatomic) NSDictionary *commonAttrs;
@property (copy, nonatomic) NSDictionary *advancedAttrs;

+ (id)keyMapper;

- (void).cxx_destruct;

@end

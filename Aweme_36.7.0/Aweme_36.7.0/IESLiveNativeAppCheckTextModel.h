@interface IESLiveNativeAppCheckTextModel : IESLiveNativeAppBaseModel

@property (nonatomic) BOOL hit;

+ (id)hitJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end

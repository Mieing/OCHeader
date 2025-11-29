@interface AnnieRequestPinWidgetParamModel : IESLiveBridgeModel

@property (nonatomic) long long operation;
@property (nonatomic) long long key;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;

@end

@interface ACCVideoQualitySettingCGSize : ACCVideoQualitySettingValue

@property (nonatomic) struct CGSize { double width; double height; } hdValue;
@property (nonatomic) struct CGSize { double width; double height; } defaultValue;
@property (copy, nonatomic) id /* block */ lazyValue;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)decideValueWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end

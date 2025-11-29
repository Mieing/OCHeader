@interface ACCVideoQualitySettingBOOL : ACCVideoQualitySettingValue

@property (nonatomic) BOOL hdValue;
@property (nonatomic) BOOL defaultValue;
@property (copy, nonatomic) id /* block */ lazyValue;

+ (id)modelCustomPropertyMapper;

- (id)decideValueWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end

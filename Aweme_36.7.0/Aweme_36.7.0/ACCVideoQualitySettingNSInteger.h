@interface ACCVideoQualitySettingNSInteger : ACCVideoQualitySettingValue

@property (nonatomic) long long hdValue;
@property (nonatomic) long long defaultValue;
@property (copy, nonatomic) id /* block */ lazyValue;

+ (id)modelCustomPropertyMapper;

- (id)decideValueWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end

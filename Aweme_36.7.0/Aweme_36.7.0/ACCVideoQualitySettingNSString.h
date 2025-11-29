@class NSString;

@interface ACCVideoQualitySettingNSString : ACCVideoQualitySettingValue

@property (copy, nonatomic) NSString *hdValue;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) id /* block */ lazyValue;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)decideValueWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end

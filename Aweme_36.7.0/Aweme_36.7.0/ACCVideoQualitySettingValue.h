@interface ACCVideoQualitySettingValue : NSObject

@property (nonatomic) BOOL isDefaultClientValue;
@property (nonatomic) BOOL isHDClientValue;
@property (nonatomic) BOOL isLazyValue;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)decideValueWithModel:(id)a0;
- (id)description;
- (BOOL)isValid;

@end

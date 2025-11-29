@class NSString;

@interface AWERecordBeautyItemExtraBeautifyItemModel : NSObject

@property (nonatomic) long long realMinValue;
@property (nonatomic) long long realMaxValue;
@property (readonly, nonatomic) long long convertedMinValue;
@property (readonly, nonatomic) long long convertedMaxValue;
@property (readonly, nonatomic) long long convertedDefaultValue;
@property (nonatomic) long long realDefaultValue;
@property (readonly, nonatomic) BOOL isDoubleDirection;
@property (readonly, copy, nonatomic) NSString *tag;
@property (readonly, copy, nonatomic) NSString *name;

- (long long)convertConvertedValueToRealValue:(long long)a0;
- (long long)convertRealValueToConvertedValue:(long long)a0;
- (void)convertRealValueToConvertedValue;
- (long long)convertValue:(long long)a0 sourceMinValue:(long long)a1 sourceMaxValue:(long long)a2 targetMinValue:(long long)a3 targetMaxValue:(long long)a4;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

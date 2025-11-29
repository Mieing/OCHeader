@class NSArray;

@interface AWEPublishPaymentPreviewTimePickerModel : NSObject

@property (readonly, nonatomic) unsigned long long unit;
@property (copy, nonatomic) NSArray *rawValues;
@property (readonly, copy, nonatomic) NSArray *stringValues;

- (void).cxx_destruct;
- (long long)maxValue;
- (id)initWithUnit:(unsigned long long)a0;
- (long long)minValue;

@end

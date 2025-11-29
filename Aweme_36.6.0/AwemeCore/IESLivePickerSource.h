@class NSString, NSArray;

@interface IESLivePickerSource : NSObject

@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSArray *widthRatio;

- (id)stringValueForRow:(long long)a0 forComponent:(long long)a1;
- (id)valuesRow;
- (id)attributeStringValueForRow:(long long)a0 forComponent:(long long)a1;
- (id)valueDate;
- (void).cxx_destruct;
- (id)endDate;
- (id)startDate;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)a0;

@end

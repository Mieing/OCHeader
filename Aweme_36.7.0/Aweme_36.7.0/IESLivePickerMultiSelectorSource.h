@class NSArray;

@interface IESLivePickerMultiSelectorSource : IESLivePickerSource

@property (retain) NSArray *range;
@property (retain) NSArray *value;

- (id)stringValueForRow:(long long)a0 forComponent:(long long)a1;
- (id)valuesRow;
- (id)attributeStringValueForRow:(long long)a0 forComponent:(long long)a1;
- (void).cxx_destruct;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)a0;

@end

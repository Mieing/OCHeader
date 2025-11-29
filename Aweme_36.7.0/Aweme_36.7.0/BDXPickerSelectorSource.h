@class NSArray, NSString, NSNumber;

@interface BDXPickerSelectorSource : BDXPickerSource

@property (retain) NSArray *range;
@property (retain) NSString *rangeKey;
@property (retain) NSNumber *value;

- (id)stringValueForRow:(long long)a0 forComponent:(long long)a1;
- (id)valuesRow;
- (void).cxx_destruct;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)a0;

@end

@class NSArray;

@interface BDXPickerMultiSelectorSource : BDXPickerSource

@property (retain) NSArray *range;
@property (retain) NSArray *rangeKey;
@property (retain) NSArray *value;

- (id)stringValueForRow:(long long)a0 forComponent:(long long)a1;
- (id)valuesRow;
- (void).cxx_destruct;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)a0;

@end

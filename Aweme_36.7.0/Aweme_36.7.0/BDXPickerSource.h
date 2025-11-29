@class NSString, UIColor;

@interface BDXPickerSource : NSObject

@property (retain) NSString *mode;
@property (retain) UIColor *cancelColor;
@property (retain) UIColor *confirmColor;
@property (retain) NSString *title;
@property (retain) UIColor *titleColor;
@property double titleFontSize;
@property (retain) NSString *cancelString;
@property (retain) NSString *confirmString;

- (id)stringValueForRow:(long long)a0 forComponent:(long long)a1;
- (id)valuesRow;
- (id)valueDate;
- (void).cxx_destruct;
- (id)endDate;
- (id)startDate;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)a0;

@end

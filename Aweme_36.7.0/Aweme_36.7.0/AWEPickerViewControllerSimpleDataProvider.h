@class NSArray, NSString;

@interface AWEPickerViewControllerSimpleDataProvider : NSObject <AWEPickerViewControllerDataProvider>

@property (nonatomic) double componentWidth;
@property (nonatomic) double rowHeight;
@property (retain, nonatomic) NSArray *rowTexts;
@property (nonatomic) long long defaultIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)defaultIndexForComponent:(long long)a0;
- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;

@end

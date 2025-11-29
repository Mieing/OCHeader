@class DUXPicker, NSArray, DUXNavigationBar, NSString;

@interface AWETimingCloseTimePickerViewController : UIViewController <DUXPickerDelegate, DUXSheetDelegate>

@property (retain, nonatomic) DUXPicker *duxPicker;
@property (retain, nonatomic) DUXNavigationBar *bar;
@property (copy, nonatomic) NSArray *hoursArray;
@property (copy, nonatomic) NSArray *minutesArray;
@property (copy, nonatomic) NSArray *minutesArrayWithZero;
@property (copy, nonatomic) id /* block */ onPickCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (long long)componentCountInDUXPicker:(id)a0;
- (long long)duxPicker:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)duxPicker:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)selectedByTimeInterval:(double)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

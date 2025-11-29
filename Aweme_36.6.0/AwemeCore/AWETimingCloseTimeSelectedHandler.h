@class NSArray, NSString, DUXContentSheet;

@interface AWETimingCloseTimeSelectedHandler : NSObject <DUXSingleSelectionPanelDelegate>

@property (copy, nonatomic) NSArray *timeSelectedOptions;
@property (weak, nonatomic) DUXContentSheet *timeSelectedSheet;
@property (weak, nonatomic) DUXContentSheet *timePickerSheet;
@property (copy, nonatomic) NSString *prePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentSelectedIndex;
- (void)showTimeSelectedSheetWithPrePage:(id)a0;
- (void)trackTimeSelectedSheetShow;
- (void)trackTimeCustomizeSheetConfirmWithEnterMethod:(id)a0 timeStatus:(id)a1 clickStatus:(id)a2;
- (void)showTimeCustomizeSheet;
- (void)trackTimeCustomizeSheetCancel;
- (void)trackTimeCustomizeSheetShow;
- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (void)selectionPanel:(id)a0 didClickRow:(long long)a1;
- (void).cxx_destruct;

@end

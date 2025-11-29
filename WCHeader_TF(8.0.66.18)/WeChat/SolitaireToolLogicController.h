@class NSString, MMActionSheetDatePicker, WCAccountBindPhoneControlLogic, MMPickLocationViewController;
@protocol SolitaireToolLogicControllerDelegate;

@interface SolitaireToolLogicController : NSObject <MMPickLocationViewControllerDelegate, MMActionSheetDatePickerDelegate, SolitaireGetPhoneNumberSheetDelegate, WCAccountBindPhoneControlLogicDelegate>

@property (retain, nonatomic) MMPickLocationViewController *locationViewController;
@property (retain, nonatomic) MMActionSheetDatePicker *datePicker;
@property (retain, nonatomic) WCAccountBindPhoneControlLogic *bindPhoneLogic;
@property (weak, nonatomic) id<SolitaireToolLogicControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)jumpToLocationView;
- (void)showDatePicker;
- (void)showGetPhoneNumberSheet;
- (void)cancelBindPhone;
- (id)onGetRightBarButton;
- (void)onFinishSelectedLocation;
- (void)onCancelSeletctedLocation;
- (void)datePickerConfirm:(id)a0;
- (void)datePickerCancel:(id)a0;
- (void)getPhoneNumberDidCancel;
- (void)getPhoneNumberDidComfirm:(id)a0;
- (void)onWCAccountBindPhoneControlLogicStop:(id)a0;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)a0;
- (void).cxx_destruct;

@end

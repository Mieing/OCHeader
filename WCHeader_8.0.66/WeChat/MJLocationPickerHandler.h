@class MMPickLocationViewController;

@interface MJLocationPickerHandler : NSObject <MMPickLocationViewControllerDelegate>

@property (retain, nonatomic) MMPickLocationViewController *picker;
@property (copy, nonatomic) id /* block */ didFinishPick;
@property (copy, nonatomic) id /* block */ didCancel;

- (id)initWithPicker:(id)a0;
- (void)dealloc;
- (id)onGetRightBarButton;
- (void)onTapAddButton;
- (void)onCancelSeletctedLocation;
- (void).cxx_destruct;

@end

@class AWEIMMessageConversation, NSArray, NSString, UIView, UIViewController;
@protocol IESIMPickerProtocol, IESIMStandardNavigationBarProtocol;

@interface AWEIMGroupMemberBlockTimeChooseViewControllerV2 : UIViewController <IESIMPickerDelegate>

@property (retain, nonatomic) NSArray *titleArray;
@property (retain, nonatomic) UIView<IESIMPickerProtocol> *duxPicker;
@property (retain, nonatomic) UIView<IESIMStandardNavigationBarProtocol> *bar;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSArray *uidArray;
@property (copy, nonatomic) NSArray *blockTimeArray;
@property (copy, nonatomic) NSString *selectedItemKey;
@property (retain, nonatomic) UIViewController *blockManagerVC;
@property (retain, nonatomic) UIViewController *backToVCWhenOperationFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)componentCountInPicker:(id)a0;
- (long long)picker:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)picker:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)initWithConversation:(id)a0 uidArray:(id)a1;
- (void)__didTapConfirm;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

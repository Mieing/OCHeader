@class NSString;
@protocol IESIMPickerDelegate;

@interface AWEIMDUXPickerDelegateWrapper : NSObject <DUXPickerDelegate>

@property (weak, nonatomic) id<IESIMPickerDelegate> pickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)componentCountInDUXPicker:(id)a0;
- (long long)duxPicker:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)duxPicker:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)duxPicker:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end

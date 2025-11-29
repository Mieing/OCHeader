@class NSString;
@protocol IWCUIKitInputControllerDelegate;

@interface WCUIKitInputControllerProxy : NSObject <InputControllerDelegate>

@property (weak, nonatomic) id<IWCUIKitInputControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getInputControlerModeWith:(unsigned long long)a0;

- (id)getInputControllerWithDelegate:(id)a0;
- (id)getGrowTextView;
- (void)didCommitText:(id)a0;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewHeightDidChanged:(id)a0;
- (void)keyboardWillShow;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (double)getVisibleHeight;
- (void).cxx_destruct;

@end

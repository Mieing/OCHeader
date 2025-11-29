@class IESIMGrowingTextView, NSString;

@interface IESIMInputKeyboardComponent : AWEIMComponentBase <IESIMInputKeyboardComponentInterface>

@property (retain, nonatomic) IESIMGrowingTextView *textView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardBounds;
@property (nonatomic) BOOL keyboardShowing;
@property (nonatomic) double keyboardShowDurationBeforeSend;
@property (nonatomic) double currentKeyboardShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hideKeyboardByUser:(BOOL)a0;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)handleKeyboardDidShowNoti:(id)a0;
- (void)handleInputHideNoti;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;

@end

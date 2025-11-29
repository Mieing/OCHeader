@class AWEIMUITask, NSString, UIView;
@protocol IESIMMessageListUITaskService, AWEIMMessageTableViewInterface;

@interface IESIMLynxHandelKeyboardShowNotiComponent : AWEIMComponentBase <AWEIMMessageTableViewAction, UITextFieldDelegate, IESIMMessageListLifeCycleAction, AWEIMInputVIewControllerAction, IESIMLynxHandelKeyboardShowNotiService>

@property (nonatomic) BOOL changedTableInsetsWhenSelectLynxContainerCell;
@property (retain, nonatomic) AWEIMUITask *keyboardShowBlockUITask;
@property (nonatomic) BOOL hideKeyboardWhenSelectLynxContainerCell;
@property (nonatomic) BOOL shouldBlockNativeChangeTableInsets;
@property (nonatomic) BOOL keepLynxTextFieldResponderDurationKeyboardShowAnimation;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (nonatomic) struct CGSize { double width; double height; } keyboardSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } originInsets;
@property (retain, nonatomic) UIView *firstResponderViewInLynxContainerCell;
@property (nonatomic) double jsbChangedTableViewContentOffsetY;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)resetTableViewContentInsetByQuoteReply;
- (void)tableViewDidScroll:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)enqueueUITask:(id)a0;
- (void)handelKeyboardShowNotiWhenInputVCTextIsNotFirstResponder:(id)a0;
- (void)adjustCardMessageToKeyboardWithDistance:(id)a0;
- (void)msgList_viewDidLoad:(id)a0;
- (void)handleKeyboardDidShowNotiWhenInputVCTextIsNotFirstResponder:(id)a0;
- (void)resignFirstResponderIfInLynxContainer;
- (id)findFirstResponderIfInLynxContainer;
- (id)findFirstResponderCellIfInLynxContainer;
- (id)getInputViewController;
- (void).cxx_destruct;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (id)findFirstResponder:(id)a0;

@end

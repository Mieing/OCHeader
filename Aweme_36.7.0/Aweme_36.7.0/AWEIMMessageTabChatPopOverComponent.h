@class NSString, UIView, NSNumber, AWEIMChatModel;
@protocol IESIMActionSheetProtocol, AWEIMMessageTabChatPopOverAction;

@interface AWEIMMessageTabChatPopOverComponent : AWEIMComponentBase <AWEIMMessageTabChatPopOverInterface, AWEIMListTabWrapperAction, AWEIMMessageTabPlusButtonAction, AWEIMMessageTabChatDataAction, AWEIMMessageTabEcomChatDataAction>

@property (retain, nonatomic) AWEIMChatModel *originChat;
@property (nonatomic) long long originIndex;
@property (retain, nonatomic) UIView<IESIMActionSheetProtocol> *popoverActionSheet;
@property (weak, nonatomic) id<AWEIMMessageTabChatPopOverAction> action;
@property (retain, nonatomic) NSNumber *currentThemeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)messageTabDataDidChanged;
- (void)listViewControllerWillDisappear:(long long)a0;
- (void)plusPanelActionSheetWillShow;
- (void)setPreferThemeStyle:(long long)a0;
- (void)triggerChatPopOverActionSheetWithModels:(id)a0 cell:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 chat:(id)a3;
- (void)hidePopOverIfNeeded;
- (BOOL)isDisplayingPopOver;
- (void)p_hideIfNeeded;
- (void)p_trackPopOverShow:(id)a0;
- (id)__popoverSheetShapeColor;
- (id)__popoverSheetMaskColor;
- (id)__preferredThemeColorForBaseColor:(id)a0;
- (id)p_typeForChat:(id)a0;
- (id)p_innerMessageTypeForChat:(id)a0;
- (void).cxx_destruct;

@end

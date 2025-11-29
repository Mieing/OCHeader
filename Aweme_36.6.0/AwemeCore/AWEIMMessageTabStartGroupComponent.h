@class NSString, IESIMButton;
@protocol AWEIMMessageTabModeInterface;

@interface AWEIMMessageTabStartGroupComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider, IESIMMessageTabStartGroupInterface, AWEIMMessageTabPlusButtonAction>

@property (retain, nonatomic) IESIMButton *barStartGroupTextButton;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)buttonPosition;
- (id)customNaviButtonView;
- (BOOL)canShowInPlusPanel;
- (id)plusButtonModel;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)p_didClickInPlusPanel;
- (void)plusPanelActionSheetWillShow;
- (void)p_didClickBarStartGroupTextButton;
- (void).cxx_destruct;

@end

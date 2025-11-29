@class AWEButton, NSString;
@protocol AWEIMMessageTabModeInterface, AWEIMMessageTabPlusButtonInterface;

@interface AWEIMMessageTabPrivateChatMgrComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider, AWEIMMessageTabPrivateChatMgrInterface>

@property (retain, nonatomic) AWEButton *barIconPrivateChat;
@property (weak, nonatomic) id<AWEIMMessageTabPlusButtonInterface> plusButtonService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (BOOL)canShowInPlusPanel;
- (id)plusButtonModel;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (BOOL)canShowEntryView;
- (void)p_didClickBarPrivateChatButton;
- (void)p_transferToPrivateChatHelper;
- (void).cxx_destruct;

@end

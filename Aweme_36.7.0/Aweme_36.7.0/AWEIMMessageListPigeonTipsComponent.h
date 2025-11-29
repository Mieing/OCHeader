@class NSString, AWEIMPigeonTipsView, AWEUserModel;
@protocol AWEIMMessageListBottomFloatingInterface;

@interface AWEIMMessageListPigeonTipsComponent : AWEIMComponentBase <AWEIMMessageListBottomFloatingViewProtocol, AWEIMMessageListUserInfoAction, AWEIMMessageListBackgroundAction, AWEIMMessageListPigeonTipsInterface>

@property (retain, nonatomic) AWEIMPigeonTipsView *pigeonTipsView;
@property (retain, nonatomic) AWEUserModel *user;
@property (weak, nonatomic) id<AWEIMMessageListBottomFloatingInterface> bottomFloatingService;
@property (nonatomic) BOOL showInFloatMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFetchFullDetailUser:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (id)viewToDisplayInBottomContainer;
- (BOOL)canShowBarWhenInputTypeChangedTo:(long long)a0;
- (BOOL)isPigeonTipsViewShowing;
- (void)dismissPigeonTipsView:(BOOL)a0;
- (BOOL)shouldShowPigeonTips:(id)a0;
- (BOOL)shouldShowPigeonTipsV2:(id)a0;
- (BOOL)pigeonRoleConditionWithUser:(id)a0;
- (BOOL)isLifeMsgSyncWithUser:(id)a0;
- (BOOL)publicCondition;
- (void)p_addPigeonTipsView;
- (void)p_closeBtnClicked:(id)a0;
- (void).cxx_destruct;

@end

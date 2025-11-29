@class AWEIMBaseViewControllerNaviBarControllerContext, UIStackView, IESIMButton, AWEIMBaseViewControllerNaviBarControllerModel, NSString;
@protocol AWEIMBaseViewControllerNaviBarControllerDelegate;

@interface AWEIMBaseViewControllerNaviBarController : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEIMBaseViewControllerNaviBarControllerModel *model;
@property (retain, nonatomic) AWEIMBaseViewControllerNaviBarControllerContext *context;
@property (retain, nonatomic) IESIMButton *contactButton;
@property (retain, nonatomic) UIStackView *rightButtonsContainerView;
@property (weak, nonatomic) id<AWEIMBaseViewControllerNaviBarControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__refreshNavigationViews;
- (void)__updateNaviBarWhenUserChanged;
- (long long)__imListNaviBarEntranceType;
- (void)__releaseUnnecessaryViews;
- (void)__createContactButtonIfNeeded;
- (void)__layoutNavigationViews;
- (void)__layoutIMListNaviBarEntranceTypeChatRoomRightCreateGroupRight;
- (void)__layoutIMListNaviBarEntranceTypeChatRoomRightCreateGroupLeft;
- (void)__layoutIMListNaviBarEntranceTypeDefault;
- (void)__createRightButtonsContainerViewIfNeeded;
- (void)__addNaviBarCustomView:(id)a0 forPosition:(unsigned long long)a1 target:(id)a2 action:(SEL)a3;
- (void)__didClickContactButton:(id)a0;
- (BOOL)__shouldShowChatRoomEntrance;
- (id)__chatRoomBusinessContactButton;
- (id)__imBusinessContactButton;
- (void)updatePointViewWithHidden:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)showBubbleViewIfNeeded;
- (BOOL)isBubbleViewDisplaying;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

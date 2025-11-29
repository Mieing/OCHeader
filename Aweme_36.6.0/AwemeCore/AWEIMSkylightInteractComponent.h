@class AWEIMSkylightExclude, NSString;
@protocol AWEIMSkylightViewInterface;

@interface AWEIMSkylightInteractComponent : AWEIMComponentBase <AWEIMSkylightInteractInterface, AWEIMSkylightExcludeDelegate>

@property (retain, nonatomic) AWEIMSkylightExclude *exclude;
@property (weak, nonatomic) id<AWEIMSkylightViewInterface> skylightViewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_asyncGetIESConvFor1To1ChatWithConvId:(id)a0 completion:(id /* block */)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewWillDisappear;
- (void)updateHasEverPressedWithModel:(id)a0;
- (void)didSelectItemCell:(id)a0 model:(id)a1 momentController:(id)a2;
- (void)didLongPressedAvatarWithCell:(id)a0;
- (void)dismissLongPressMenu;
- (void)exclude:(id)a0 didDisableBizModel:(id)a1;
- (void)didSelectedChatWithModel:(id)a0 cell:(id)a1;
- (void)didSelectedOtherStatusWithModel:(id)a0;
- (void)didSelectCloseFriendGuideWithModel:(id)a0 momentController:(id)a1;
- (void)p_didSelectBizCellWithModel:(id)a0;
- (void)p_enterPrivateChatWithModel:(id)a0 showKeyboard:(BOOL)a1 enterMethod:(id)a2;
- (id)p_roomIdsFromDataSource;
- (void).cxx_destruct;

@end

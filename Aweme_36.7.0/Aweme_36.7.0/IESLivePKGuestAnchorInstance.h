@class IESLivePKEventTransparentView, NSString, IESLivePKChatGuestListView, IESLivePKGuestOperatePanelView;
@protocol IESLivePKModel, IESLivePKProvider;

@interface IESLivePKGuestAnchorInstance : NSObject <IESLivePKChatGuestListViewDelegate, IESLivePKGuestOperatePanelViewModelDelegate, IESLivePKGuestAction, IESLiveInteractiveMediaServiceDelegate>

@property (retain, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) id<IESLivePKModel> pkmodel;
@property (retain, nonatomic) IESLivePKChatGuestListView *guestListView;
@property (retain, nonatomic) IESLivePKEventTransparentView *anchorEmojiContainer;
@property (weak, nonatomic) IESLivePKGuestOperatePanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDiContext:(id)a0;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (void)interactiveMediaService:(id)a0 didUpdatedSessionsLocalLayout:(id)a1;
- (void)showGuestOperatePanel:(id)a0;
- (void)didUpdateOppositeRoomSilence;
- (void)clearGuestView;
- (void)didClickEmptyView:(long long)a0;
- (void)didClickItemView:(id)a0;
- (void)removeGuestListView;
- (id)p_createGuestListView;
- (void)showPanelWithConfig:(id)a0 requestPage:(id)a1;
- (void)switchGuest;
- (BOOL)muteStateForUser:(id)a0;
- (BOOL)isUserConnected:(id)a0;
- (void)muteOthers:(id)a0 mute:(BOOL)a1;
- (void)stopConnectedWithUserID:(id)a0;
- (void).cxx_destruct;

@end

@class IESLiveLayoutPlaceholderView, IESLiveInteractionEmojiModel, NSString, IESLiveAudioBackgroundViewModel, IESLiveRightBottomMutuallyExclusiveItem, IESLiveAudioBackgroundView, IESLiveInteractionLayout, IESLiveInteractDynamicContainerViewHolder;
@protocol IESLiveInteractiveInviteService, IESLiveInteractionDynamicStageDataSource, IESLiveInteractDynamicContainerProvider, IESLiveMultiUserScenarioMonitor;

@interface IESLiveInteractionDynamicStage : NSObject <IESLiveInteractionLinkerServiceAction, IESLiveInteractionDynamicClickSeatRouter, IESLiveInteractXplayGameAction, IESLiveMessageInteractionModuleCommentAction, IESLiveInteractionDynamicStageDelegate>

@property (retain, nonatomic) IESLiveInteractDynamicContainerViewHolder *viewHolder;
@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> provider;
@property (retain, nonatomic) IESLiveInteractionEmojiModel *thankEmojiModel;
@property (retain, nonatomic) IESLiveAudioBackgroundView *bgView;
@property (retain, nonatomic) IESLiveAudioBackgroundViewModel *bgViewModel;
@property (nonatomic) BOOL hasSetBg;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *placeholderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *bigPartyItem;
@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendsService;
@property (weak, nonatomic) id<IESLiveMultiUserScenarioMonitor> monitor;
@property (nonatomic) BOOL isPrestream;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (weak, nonatomic) id<IESLiveInteractionDynamicStageDataSource> dataSource;
@property (copy, nonatomic) id /* block */ firstRenderBgBlock;
@property (copy, nonatomic) id /* block */ firstClippedBgBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)allSeatProviderViews;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (void)updateGuestListWithAppData:(id)a0;
- (void)willLoad;
- (id)bgContainer;
- (BOOL)isCustomizeAudioRoom;
- (void)updateWithList:(id)a0;
- (id)emojiContainerForUserID:(id)a0;
- (void)updateBackgroundViewWithLayout:(id)a0;
- (void)willUnLoad;
- (void)p_hideRightBottomPlaceholderIfNeeded;
- (void)notifyUpdateClearScreenState:(BOOL)a0;
- (void)updateBackgroundViewWithCurrentLayout;
- (void)didClickInviteWithUser:(id)a0 andInRoom:(BOOL)a1;
- (void)updateRoomTheme;
- (void)p_addNewBackgroundImageIfNeeded;
- (void)didTapSlotView:(long long)a0 clickType:(unsigned long long)a1;
- (void)didClickFantiView:(long long)a0;
- (void)didClickThankGiving:(id)a0;
- (void)onClickedSelfDisciplineRecord:(id)a0;
- (BOOL)isRadioChatRoom;
- (void)updatePublicScrennHeight;
- (void)p_showPublicScreenPlaceHolder;
- (id)roomThemeUpdater;
- (id)renderLynxView;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (id)room;

@end

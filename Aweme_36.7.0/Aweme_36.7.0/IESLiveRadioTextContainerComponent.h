@class NSNumber, IESLiveInteractionLayout, NSString, IESLiveInteractDynamicContainerViewHolder, IESLiveAudioTextContainerView, HTSLiveGiftCommentMetaContent;
@protocol IESLiveSubscription, IESLiveRadioTextContainerSpeechService;

@interface IESLiveRadioTextContainerComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveRadioTextContainerRouter, IESLiveAudioSubtitleActions, IESLiveInteractDynamicContainerActions, IESLiveAnchorRoomStatusChangeEvents>

@property (nonatomic) BOOL shouldHideContainer;
@property (retain, nonatomic) id<IESLiveSubscription> afkDispose;
@property (retain, nonatomic) HTSLiveGiftCommentMetaContent *giftComment;
@property (nonatomic) BOOL isOpenSubtitle;
@property (retain, nonatomic) IESLiveInteractDynamicContainerViewHolder *viewHolder;
@property (retain, nonatomic) IESLiveAudioTextContainerView *pcTextContainer;
@property (retain, nonatomic) NSNumber *commentWallStartTime;
@property (retain, nonatomic) id<IESLiveRadioTextContainerSpeechService> speechService;
@property (retain, nonatomic) IESLiveInteractionLayout *startLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)showContainer;
- (void)hideContainer;
- (BOOL)isShowingContainer;
- (id)textContainerViewHolder;
- (void)reAddTextContainerToSuperview;
- (BOOL)isOpenGiftCommentWall;
- (void)handleSpeechEventWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableShowSubtitle;
- (void)componentBindContext;
- (void)onSubtitleStarted:(id)a0;
- (void)onSubtitleStopped;
- (void)onSubtitleUpdate:(id)a0;
- (void)sendRadioTextContainerEventWithData:(id)a0;
- (void)trackTextContainerShow;
- (void)componentStartLayout:(id)a0;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)dynamicContainerInsertElementDidLoad:(id)a0 succeed:(BOOL)a1;
- (void)setupContainerDefaultStatus;
- (void)loadPCTextContainer;
- (void)removeSubtitleTextContainer;
- (void)trackCommentWallClose;
- (void)notifyShowContainer:(BOOL)a0;
- (void)observeAfk:(BOOL)a0;
- (void)refreshTextContainerIfNeeded;
- (id)radioAvatarView;
- (void)sendRadioDynamicEventWithType:(id)a0 data:(id)a1;
- (void)refreshPublicScreenHeight;
- (BOOL)enableDynamicRadioStage;
- (void)sendRadioDynamicStageEventWithData:(id)a0;
- (void)loadSubtitleTextContainer;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (void)messageReceived:(id)a0;

@end

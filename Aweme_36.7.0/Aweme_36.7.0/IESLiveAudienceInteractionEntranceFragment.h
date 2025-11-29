@class IESLiveInteractionLayout, NSString, IESLiveInteractionAudienceCustomItemView;
@protocol IESLiveCompoundSubscription, IESLiveMessageInteractionModuleAudienceMoreToolsInterface;

@interface IESLiveAudienceInteractionEntranceFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler, IESLiveSocialInteractPreLoadExAction, IESLiveRoomThemeActions, IESLiveAudienceInteractionEntranceRouter, IESLiveInteractionLinkerServiceAction>

@property (retain, nonatomic) IESLiveInteractionAudienceCustomItemView *toolBarAudienceInteractionEntrance;
@property (retain, nonatomic) IESLiveInteractionAudienceCustomItemView *morePanelEntrancePlaceHolder;
@property (nonatomic) long long currentEntrancePosition;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> componentDisposable;
@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (retain, nonatomic) id<IESLiveMessageInteractionModuleAudienceMoreToolsInterface> moreToolsInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)muteStateDidChange:(BOOL)a0 reason:(id)a1;
- (void)roomThemeNeedRefresh;
- (void)didMultiAudioSceneChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)multiAudioLayoutDidChangeFrom:(id)a0 to:(id)a1;
- (void)updateUnreadInteractionApplicationCount:(id)a0;
- (void)updateAudienceInteractionEntranceWithStatus:(unsigned long long)a0;
- (void)onPreapplySucceeded;
- (void)onCancelPreapplySucceeded;
- (void)interactionLinkerService:(id)a0 userStateDidChangedFrom:(long long)a1 to:(long long)a2;
- (void)enableShowAudienceInteractionEntrance;
- (BOOL)enableShowInitialItemRedDot;
- (void)markInitialItemRedDotShownFlag;
- (void)disableShowAudienceInteractionEntrance;
- (void).cxx_destruct;

@end

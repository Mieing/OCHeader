@class IESLiveStreamPictureRecognitionMonitor, IESLiveStreamPictureRecognitionStore, HTSLiveStreamRecognitionContainers, NSString, NSMutableArray;

@interface IESLiveStreamPictureRecognitionFragment : IESLiveRoomComponent <IESLiveLongPressActions, IESLiveMessageInteractionModuleStreamPictureRecogInterface, IESLiveStreamPictureRecognitionReactions, HTSLiveCleanScreenActions, HTSLiveStreamPictureExtensionTranslateAction>

@property (retain, nonatomic) IESLiveStreamPictureRecognitionStore *store;
@property (retain, nonatomic) IESLiveStreamPictureRecognitionMonitor *monitor;
@property (retain, nonatomic) NSMutableArray *entryModels;
@property (retain, nonatomic) HTSLiveStreamRecognitionContainers *containerConfig;
@property (nonatomic) BOOL longPressGuideHasShown;
@property (nonatomic) BOOL isNewLongPressPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)disableLongPressGesture;
- (void)prepareForLongPressMenuPopupWithItem:(id)a0;
- (void)longPressGuideViewShow;
- (void)changeCleanScreenMode:(long long)a0;
- (void)showLongPressGuideIfNeed;
- (BOOL)shouldShowEntry;
- (void)onPanelTranslateWithType:(unsigned long long)a0 panelScene:(id)a1 containerView:(id)a2 duration:(double)a3 routerParams:(id)a4;
- (void)registerStreamPicRecogEntryWithModel:(id)a0;
- (void)beginToRecognizeWithScene:(int)a0 entryType:(id)a1 btmToken:(id)a2;
- (id)getLiveGuideSearchParams;
- (void)p_addCleanRecognitionEntry;
- (id)availEntryModel;
- (void)trackEntryClickWithScene:(int)a0 entryType:(id)a1;
- (id)getBtmTokenWithEntry:(id)a0;
- (void)beginToRecognizeWithEntryModel:(id)a0 entryType:(id)a1 btmToken:(id)a2;
- (void)trackEntryShowWithScene:(int)a0 entryType:(id)a1;
- (void).cxx_destruct;

@end

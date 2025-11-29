@class IESLiveGuideDotManager, IESLiveAudienceContainerContext, NSString;
@protocol IESLiveHighlightContainerSyncDataStrategyProvider;

@interface IESLiveAudienceCommunityPlugin : IESLiveAudiencePlugin <IESLiveUGGuideAction, HTSLiveHideComponentAction>

@property (retain, nonatomic) IESLiveAudienceContainerContext *context;
@property (retain, nonatomic) id<IESLiveHighlightContainerSyncDataStrategyProvider> highlightStrategyProvider;
@property (retain, nonatomic) IESLiveGuideDotManager *guideDotManager;
@property (nonatomic) long long audienceStartStayTime;
@property (nonatomic) long long audienceEndStayTime;
@property (nonatomic) BOOL isExitGuideShown;
@property (nonatomic) BOOL needHideAllComponent;
@property (nonatomic) BOOL hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)executeRoomExitAction;
- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void)didEnterRoom:(id)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (BOOL)couldCloseRoom;
- (void)setGuideShownFlag;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)setupHighlightManager;
- (void)cleanXTabGuideRoomsCaheInfo;
- (void)liveDesktopGuideConfig;
- (void)setupGuideDot;
- (void)parseLiveCommunityParamsFromPreview;
- (BOOL)shouldShowEcomShortCutGuide;
- (BOOL)shouldShowLiveShortCutGuide;
- (void)recordAudienceEndStayTime;
- (BOOL)enableStoreVC;
- (BOOL)stayRoomTime;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;
- (void)viewWillAppear;
- (void)applicationWillTerminate;
- (void)dealloc;
- (void)commonInitWithContext:(id)a0;
- (void)viewDidDisappear;

@end

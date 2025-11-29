@interface IESLiveAudienceCommunityPluginSwift : IESLiveAudiencePlugin <HTSLiveHideComponentAction, IESLiveUGGuideAction> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ highlightStrategyProvider;
    void /* unknown type, empty encoding */ guideDotManager;
    void /* unknown type, empty encoding */ audienceStartStayTime;
    void /* unknown type, empty encoding */ audienceEndStayTime;
    void /* unknown type, empty encoding */ isExitGuideShown;
    void /* unknown type, empty encoding */ hasAppeared;
}

@property (nonatomic) BOOL needHideAllComponent;

- (void)applicationWillTerminate;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)willHideAllComponent;
- (void)hideComponentsForPortrait;
- (void)showComponentsForPortrait;
- (void)executeRoomExitAction;
- (void)setGuideShownFlag;
- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void)didEnterRoom:(id)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (BOOL)couldCloseRoom;
- (void)viewDidAppear;
- (void)initWithContext:(id)a0;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

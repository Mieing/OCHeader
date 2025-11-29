@class IESLiveBizPerformanceStore, NSString, IESLiveMoreToolsSettingItem;

@interface IESLiveBizPerformanceFragment : IESLiveRoomComponent <IESLiveBizPerformanceStoreDelegate>

@property (retain, nonatomic) IESLiveBizPerformanceStore *store;
@property (retain, nonatomic) NSString *pushIdentifier;
@property (weak, nonatomic) IESLiveMoreToolsSettingItem *demoteLive;
@property (weak, nonatomic) IESLiveMoreToolsSettingItem *smoothLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)prepareSmoothItem;
- (void)prepareDemoteItem;
- (id)p_demoteLiveContent;
- (id)p_smoothLiveContent;
- (void)toastCancelAutoChange;
- (void)p_setDemoteEnabled:(BOOL)a0 autoChange:(BOOL)a1;
- (void)p_setDegradeEnabled:(BOOL)a0 autoChange:(BOOL)a1;
- (void)p_setUpgradeEnabled:(BOOL)a0 autoChange:(BOOL)a1;
- (void)pushChangeSucceed;
- (void)toastCloseSwitch;
- (void)tr_trackAndLogSwitchChanged:(id)a0 on:(BOOL)a1 autoChange:(BOOL)a2;
- (id)p_contentWith:(BOOL)a0 scene:(id)a1 offContent:(id)a2 onContent:(id)a3 prefix:(id)a4 suffix:(id)a5;
- (void)bizPerformanceStore:(id)a0 pushMode:(long long)a1 content:(id)a2;
- (void)bizPerformanceStore:(id)a0 currentModeChangeTo:(long long)a1 result:(BOOL)a2;
- (id)p_enhanceLiveContent;
- (void).cxx_destruct;

@end

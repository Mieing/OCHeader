@class NSString, NSMutableDictionary;

@interface MonoServiceMgr : MMUserService <MultiTalkMgrExt, IVOIPUILogicMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *monoServiceAppSceneDict;
@property (retain, nonatomic) NSMutableDictionary *mainSceneAudioMonoServiceDict;
@property (retain, nonatomic) NSMutableDictionary *subSceneAudioMonoServiceDict;
@property (retain, nonatomic) NSMutableDictionary *mainSceneVideoMonoServiceDict;
@property (retain, nonatomic) NSMutableDictionary *subSceneVideoMonoServiceDict;
@property (retain, nonatomic) NSString *currentVoipOrMultiTalkId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createUniqueId:(id)a0 monoServiceKind:(unsigned long long)a1 business:(unsigned long long)a2 subBusiness:(unsigned long long)a3;
+ (id)createUniqueId:(id)a0 business:(unsigned long long)a1 subBusiness:(unsigned long long)a2;
+ (BOOL)isLastActionInMainScene;
+ (BOOL)hasSubAppScene;
+ (id)utilCreateUniqueId;
+ (BOOL)isCurrentlyInVoIPOrMultiTalk;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearData;
- (void)updateMonoServiceAppScene:(unsigned long long)a0 forMonoServiceBusiness:(unsigned long long)a1 subBusiness:(unsigned long long)a2 serviceId:(id)a3;
- (unsigned long long)getCurrentAppSceneForMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)addAudioMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2 inMainAppScene:(BOOL)a3;
- (BOOL)addAudioMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)addAudioMonoServiceBusinessUseLastActiveScene:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)removeAudioMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)addVideoMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2 inMainAppScene:(BOOL)a3;
- (BOOL)addVideoMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)addVideoMonoServiceBusinessUseLastActiveScene:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)removeVideoMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)changeAudioMonoServiceBusinessToMainAppScene:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)changeVideoMonoServiceBusinessToMainAppScene:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)changeAudioMonoServiceBusinessToSubAppScene:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (BOOL)changeVideoMonoServiceBusinessToSubAppScene:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (id)getMainAppSceneAudioMonoServiceList;
- (id)getSubAppSceneAudioMonoServiceList;
- (id)getAudioMonoServiceList;
- (unsigned long long)getMainAppSceneAudioMonoServiceCountExceptBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (unsigned long long)getSubAppSceneAudioMonoServiceCountExceptBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2;
- (id)getMainAppSceneVideoMonoServiceList;
- (id)getSubAppSceneVideoMonoServiceList;
- (BOOL)isContainAudioMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 inMainScene:(BOOL)a2;
- (BOOL)isContainVideoMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 inMainScene:(BOOL)a2;
- (BOOL)isContainAudioMonoServiceBusiness:(unsigned long long)a0 subBusiness:(unsigned long long)a1 serviceId:(id)a2 inMainScene:(BOOL)a3;
- (id)createVoipOrMultiTalkServiceId;
- (void)onPlayerStartPlay:(id)a0;
- (void)onPlayerPausePlay:(id)a0;
- (void)onPlayer:(id)a0 muteChanged:(BOOL)a1;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onVideoVoipViewDisappear;
- (void).cxx_destruct;

@end

@class NSString;

@interface BrandTimelineSettingMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) unsigned int timelineSettingInfoControlBit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowBrandTimelineSettingEntry;
- (unsigned int)getTimelineSettingInfoControlBit;
- (void)getTimelineSetting:(id /* block */)a0;
- (void)setPersonalRecommendSwitch:(id)a0 completion:(id /* block */)a1;
- (void)setCreationCenterNotifySwitch:(id)a0 completion:(id /* block */)a1;
- (void)setFinderRecommendSwitch:(id)a0 completion:(id /* block */)a1;
- (void)setHeadForPaySwitch:(id)a0 completion:(id /* block */)a1;
- (void)runSetCgi:(id)a0 complection:(id /* block */)a1;
- (BOOL)creationCenterNotifySwitch;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearAllData;

@end

@class NSArray, NSString;

@interface MMLiveConfigMgr : MMUserService <IExptServiceExt, MMServiceProtocol>

@property (retain, nonatomic) NSArray *iphoneExtendIgnoreVCArray;
@property (retain, nonatomic) NSArray *ipadExtendIgnoreVCArray;
@property (nonatomic) BOOL isLiveUIPerfMonitorEnable;
@property (nonatomic) BOOL isLiveBackgroundDecodeEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearData;
- (void)checkAndUpdateData;
- (void)updateLiveBusinessInfoFromJsonString:(id)a0;
- (void)customEventConfigForLiveAnchor;
- (void)customEventConfigForLiveAudience;
- (BOOL)getLiveBackgroundDecodeSwitch;
- (void)onExptItemListChange;
- (void).cxx_destruct;

@end

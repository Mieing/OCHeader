@class NSString, AWEDataFreeModel, AWEDataFreeView;

@interface AWEDataFreeStatusManager : NSObject

@property (copy, nonatomic) NSString *mobilePseudoCode;
@property (copy, nonatomic) NSString *unicomPrivateIPAddress;
@property (copy, nonatomic) NSString *telecomOpenIdData;
@property (retain, nonatomic) AWEDataFreeModel *dataFreeModel;
@property (retain, nonatomic) AWEDataFreeView *dataFreeView;
@property (copy, nonatomic) NSString *referString;

+ (void)launchProcess;
+ (id)sharedManager;

- (BOOL)isShowDataFreeView;
- (void)dismissDataFreeView;
- (void)willDisplayCell:(id)a0;
- (void)handleConnectionChanged:(id)a0;
- (void)privacyAlertAgreed;
- (id)exchangeAvailableSchemaWithOriginSchema:(id)a0;
- (id)getTimorEntranceContextWithSchema:(id)a0 from:(id)a1 launchFrom:(id)a2;
- (void)queryDataFreeStatusIfNeeded;
- (BOOL)shouldShowDataFreeToast:(id)a0;
- (id)getConfigForToast:(id)a0;
- (void)showFreeDataToastIfNeeded:(id)a0;
- (void)onAppLaunchTask;
- (void)showDataUsageToastIfNeeded;
- (void)willDealloc;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didInit;

@end

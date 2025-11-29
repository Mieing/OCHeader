@class AWETeenRecommendAlert, NSMutableDictionary, NSString;

@interface AWETeenRecommendManager : NSObject <AWETeenRecommendAlertDelegate, AWETeenRecommendManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *reportedMap;
@property BOOL isRequesting;
@property (retain, nonatomic) AWETeenRecommendAlert *alert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldShowLongPressPanelButton;
- (id)longPressPanelEntranceText;
- (void)reportTeenRecommendWithAweme:(id)a0 from:(long long)a1 completion:(id /* block */)a2;
- (BOOL)isAlertMaterialReady;
- (void)showTeenRecommendAlertWithCompletion:(id /* block */)a0;
- (id)longPressPanelBubbleText;
- (void)complianceSettingsFinished;
- (void).cxx_destruct;
- (void)alertDidDismiss;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end

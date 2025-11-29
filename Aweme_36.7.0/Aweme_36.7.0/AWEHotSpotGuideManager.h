@class NSSet, NSString;

@interface AWEHotSpotGuideManager : NSObject <AWEUGPushGuideByPitayaExecutorDelegate>

@property (nonatomic) BOOL shouldTriggerOpenNotiStrategy;
@property (nonatomic) BOOL preventDuplicateRequestPitaya;
@property (copy, nonatomic) NSSet *watchedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)pushGuideScene;
- (void)showPitayaPushGuide:(id)a0;
- (void)registerPushGuideByPitaya;
- (void)showHotSpotOpenNotiAlertIfNeeded:(id)a0;
- (void)showHotSpotOpenNotiAlertIfNeeded;
- (void)showOpenNotiAlertOnController:(id)a0 model:(id)a1 event:(id)a2;
- (void)resetShowOpenNotiCount;
- (void).cxx_destruct;

@end

@class NSMutableDictionary, NSDictionary, NSString, AWEHPHambListener;

@interface AWEMessageReachCommonDialogManager : HTSService <AWEMessageReachCommonDialogManager, AWEAlertInterceptorDelegate>

@property (retain, nonatomic) NSMutableDictionary *cacheDataModels;
@property (retain, nonatomic) NSDictionary *dataModels;
@property (retain, nonatomic) NSMutableDictionary *alertDic;
@property (retain, nonatomic) AWEHPHambListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)triggerForceDialogWithID:(id)a0 eventItem:(id)a1 dialogConfig:(id)a2 bizPlugin:(id)a3;
+ (void)triggerForceLynxDialogWithID:(id)a0 eventItem:(id)a1 dialogConfig:(id)a2;
+ (id)sharedInstance;

- (void)interceptorActionBeforeTriggerEventWithEvent:(id)a0;
- (void)p_handleChangeDialogData;
- (id)p_fetchDialogData;
- (void)p_addAlertWithTriggerEvent:(id)a0 componentId:(id)a1 dataModel:(id)a2;
- (void)p_addNativeAlertWithTriggerEvent:(id)a0 componentId:(id)a1 priority:(long long)a2 dataModel:(id)a3;
- (void)p_addLynxAlertWithTriggerEvent:(id)a0 componentId:(id)a1 priority:(long long)a2 dataModel:(id)a3;
- (id)getDialogDataModelWithID:(id)a0 stable:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end

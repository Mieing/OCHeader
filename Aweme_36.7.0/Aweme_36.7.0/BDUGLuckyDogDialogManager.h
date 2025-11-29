@class NSMutableDictionary, NSString, BDUGLuckyDogPopUpObj, NSObject;
@protocol OS_dispatch_queue;

@interface BDUGLuckyDogDialogManager : NSObject <BDUGLuckyDogPopupManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *dialogStoreDict;
@property (readonly, nonatomic) NSObject *dialogState;
@property (retain) NSObject<OS_dispatch_queue> *dialogPollingQueue;
@property (nonatomic) double nextPollingTime;
@property (nonatomic) long long managerStatus;
@property (nonatomic) double lockedTime;
@property (retain, nonatomic) BDUGLuckyDogPopUpObj *showingPopUpObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sdkSettingsUpdate;
+ (void)setDialogQueuePaused:(BOOL)a0;
+ (BOOL)getDialogQueuePaused;
+ (void)_setDialogQueuePaused:(BOOL)a0;
+ (id)sharedInstance;

- (id)createH5Dialog:(id)a0 withPriority:(long long)a1;
- (BOOL)enqueueH5Dilaog:(id)a0 callback:(id /* block */)a1;
- (void)renewalExpiredTimerForDialogObj:(id)a0;
- (long long)_allDialogObjsCount;
- (void)_showDialog:(id)a0;
- (void)logWithDialog:(id)a0 message:(id)a1;
- (void)_showForcedlyDialog:(id)a0;
- (double)_maxPopupQueueLockedDuration;
- (BOOL)_tryShowDialogs:(id)a0 dialogRemover:(id /* block */)a1;
- (BOOL)_throwDialogToHost:(id)a0;
- (void)_onAppDidEnterBackground;
- (void)_onAppWillEnterForeground;
- (void)_forceShowDialog:(id)a0;
- (BOOL)_enqueueAndShowDialog:(id)a0;
- (BOOL)_enqueuePopUp:(id)a0 shouldShow:(id /* block */)a1 showDialog:(id /* block */)a2 forceHide:(id /* block */)a3 force:(BOOL)a4;
- (BOOL)_finishPopUp:(id)a0 finishType:(unsigned long long)a1;
- (id)_currentShowingDialog;
- (BOOL)_isContainDialog:(id)a0;
- (BOOL)_removeDialog:(id)a0;
- (BOOL)_finishDialogWithName:(id)a0 finishType:(unsigned long long)a1;
- (BOOL)_removeDialogWithName:(id)a0;
- (id)_allDialogObjs;
- (id)_managerStatusString;
- (id)createPopUp:(id)a0 withPriority:(long long)a1 extra:(id)a2;
- (BOOL)enqueuePopUp:(id)a0 shouldShow:(id /* block */)a1 showDialog:(id /* block */)a2 forceHide:(id /* block */)a3;
- (void)forceShowPopUp:(id)a0 shouldShow:(id /* block */)a1 showDialog:(id /* block */)a2 forceHide:(id /* block */)a3;
- (BOOL)finishPopUp:(id)a0 finishType:(unsigned long long)a1;
- (id)currentShowingPopUpObj;
- (BOOL)isContainPopUp:(id)a0;
- (BOOL)removePopUp:(id)a0;
- (id)managerStatusDescription;
- (id)allPopUpObjs;
- (void)removeAllPopUps;
- (BOOL)finishPopUpWithName:(id)a0 finishType:(unsigned long long)a1;
- (BOOL)removePopUpWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)_enqueueDialog:(id)a0;
- (double)_currentTime;
- (void)_setupNotification;

@end

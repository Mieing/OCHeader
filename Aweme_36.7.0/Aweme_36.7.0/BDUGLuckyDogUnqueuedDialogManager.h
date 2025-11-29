@class NSObject, NSString, BDUGLuckyDogPopUpObj, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDUGLuckyDogUnqueuedDialogManager : NSObject <BDUGLuckyDogPopupManagerProtocol>

@property (retain, nonatomic) NSMutableArray *showingDialogs;
@property (retain, nonatomic) NSMutableArray *pendingDialogs;
@property (nonatomic) BOOL isPolling;
@property (retain) NSObject<OS_dispatch_queue> *dialogPollingQueue;
@property (nonatomic) double nextPollingTime;
@property (nonatomic) long long managerStatus;
@property (nonatomic) double lockedTime;
@property (retain, nonatomic) BDUGLuckyDogPopUpObj *showingPopUpObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

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
- (BOOL)__addDialog:(id)a0;
- (BOOL)__finishPopup:(id)a0 finishType:(unsigned long long)a1;
- (BOOL)__containsPopup:(id)a0;
- (BOOL)__removePopup:(id)a0;
- (BOOL)__finishPopupWithName:(id)a0 finishType:(unsigned long long)a1;
- (BOOL)__removePopupWithName:(id)a0;
- (void)__pollDialog;
- (void)__logWithDialog:(id)a0 message:(id)a1;
- (long long)__allDialogObjsCount;
- (BOOL)finishPopUpWithName:(id)a0 finishType:(unsigned long long)a1;
- (BOOL)removePopUpWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

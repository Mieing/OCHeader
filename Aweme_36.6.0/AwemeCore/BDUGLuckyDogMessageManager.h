@class NSObject, NSString, BDUGLuckyDogPopUpObj, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDUGLuckyDogMessageManager : NSObject <BDUGLuckyDogPopupManagerProtocol>

@property (readonly, nonatomic) NSObject *messageState;
@property (retain, nonatomic) NSMutableArray *needShowMessagesObjs;
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
- (BOOL)_enqueueMessage:(id)a0;
- (void)_showMessage:(id)a0;
- (BOOL)enqueuePopUp:(id)a0 shouldShow:(id /* block */)a1 showDialog:(id /* block */)a2 forceHide:(id /* block */)a3 force:(BOOL)a4;
- (void)logWithPopUpObj:(id)a0 message:(id)a1;
- (void)_showForcedlyMessage:(id)a0;
- (BOOL)_throwMessageToHost:(id)a0;
- (BOOL)_enqueueAndShowMessage:(id)a0;
- (void)removeAllPopUps;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, NSMutableArray, NSMutableDictionary;

@interface BDUGLuckyActionService : NSObject <BDUGLuckyActionServiceProtocol, BDUGLuckyTimerTriggerListenerProtocol>

@property (retain, nonatomic) NSMutableArray *timingActions;
@property (retain, nonatomic) NSMutableDictionary *actionListeners;
@property (retain, nonatomic) NSMutableDictionary *limitTimeActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)startTiming:(id)a0;
- (void)startTiming:(id)a0 limitTs:(double)a1;
- (id)registerActionListener:(id)a0 actions:(id)a1;
- (void)unregisterActionListener:(id)a0;
- (BOOL)__actionA:(id)a0 isChildActionOrSelfOfActionB:(id)a1;
- (id)__needRemoveAction:(id)a0;
- (void)onTimerTrigger:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopTiming:(id)a0;

@end

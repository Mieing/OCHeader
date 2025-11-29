@class JSEvent, NSDictionary, NSString;
@protocol WCPayJSLaunchGroupPayPfLogicDelegate;

@interface WCPayJSLaunchGroupPayPfLogic : WCPayControlLogic <WCPayGppfLaunchControlLogicDelegate>

@property (weak, nonatomic) id<WCPayJSLaunchGroupPayPfLogicDelegate> logicDelegate;
@property (retain, nonatomic) JSEvent *jsEvent;
@property (retain, nonatomic) NSDictionary *param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 param:(id)a1;
- (void)setJsPfLaunchLogicDelegate:(id)a0;
- (void)startLogic;
- (void)onPfLaunchControlLogicDidStop:(BOOL)a0;
- (void).cxx_destruct;

@end

@class BDXBridgeEventSubscriber, NSString;

@interface AWESearchDecoratorCombineBusiness : NSObject <AWESearchDecoratorBusinessProtocol>

@property (retain, nonatomic) BDXBridgeEventSubscriber *hotSearchCombineLynxShowSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *hotSearchCombineLynxStaySubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getHasRegisterEvent;
+ (void)setHasRegisterEvent:(BOOL)a0;
+ (id)registeredModuleClasses;

- (void)onDecoratorBusinessUpdateWithContext:(id)a0 businessParams:(id)a1;
- (void)p_registerEvent;
- (void).cxx_destruct;

@end

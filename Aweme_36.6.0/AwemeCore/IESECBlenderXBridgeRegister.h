@class NSArray, IESECServiceProxy, IESECBlenderContext, NSString;
@protocol IESECBlenderHybridAtomicAbilityHandler;

@interface IESECBlenderXBridgeRegister : NSObject <IESECBlenderXBridgeRegister>

@property (retain, nonatomic) IESECServiceProxy<IESECBlenderHybridAtomicAbilityHandler> *atomicAbilityHandler;
@property (retain, nonatomic) NSArray *bridges;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ecBlenderHybridMethod;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

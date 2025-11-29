@class NSString;

@interface RxInjectorProperty : NSObject

@property (readonly, nonatomic) Class owningClass;
@property (retain, nonatomic) id injectionKey;
@property (readonly, nonatomic) Class returnType;
@property (readonly, nonatomic) NSString *propertyName;

+ (id)propertyWithClass:(Class)a0 propertyName:(id)a1;

- (id)initWithClass:(Class)a0 propertyName:(id)a1;
- (BOOL)__rx_isProtocolAttributeString:(id)a0;
- (id)__rx_protocolsFromAttributeString:(id)a0;
- (id)__rx_swiftProtocolForProtocolName:(id)a0;
- (Class)__rx_swiftClassForClassName:(id)a0;
- (void)__determineReturnType;
- (void).cxx_destruct;

@end

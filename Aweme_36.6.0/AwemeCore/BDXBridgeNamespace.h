@class NSString, NSMutableDictionary;

@interface BDXBridgeNamespace : NSObject

@property (retain, nonatomic) NSMutableDictionary *innerMethods;
@property (retain, nonatomic) NSMutableDictionary *innerCallHandlers;
@property (copy, nonatomic) NSString *name;

+ (id)defaultNamespace;

- (void)registerBridgeMethod:(id)a0;
- (id)initWithNamespace:(id)a0;
- (id)methods;
- (void).cxx_destruct;
- (id)callHandlers;

@end

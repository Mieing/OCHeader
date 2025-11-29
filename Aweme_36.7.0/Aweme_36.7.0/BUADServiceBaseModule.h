@class NSMutableDictionary;

@interface BUADServiceBaseModule : NSObject

@property (readonly, nonatomic) NSMutableDictionary *bindings;

- (void)ensureInstance:(id)a0 conformsTo:(id)a1;
- (void)bindProvider:(id)a0 toProtocol:(id)a1 name:(id)a2;
- (void)bind:(id)a0 toProtocol:(id)a1;
- (void)bindProvider:(id)a0 toProtocol:(id)a1;
- (void)bind:(id)a0 toProtocol:(id)a1 name:(id)a2;
- (void)configure;
- (void).cxx_destruct;
- (id)init;

@end

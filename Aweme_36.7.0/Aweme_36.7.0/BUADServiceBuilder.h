@class NSMutableDictionary, NSMutableArray;

@interface BUADServiceBuilder : NSObject {
    NSMutableDictionary *_context;
    NSMutableArray *_modules;
}

- (id)initWithContext:(id)a0 modules:(id)a1;
- (void)configureModule:(id)a0;
- (id)getObject:(id)a0 name:(id)a1;
- (id)getObject:(id)a0 name:(id)a1 initializer:(SEL)a2 argumentList:(id)a3;
- (id)getObject:(id)a0 argumentList:(id)a1;
- (id)getObject:(id)a0 name:(id)a1 argumentList:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addModules:(id)a0;
- (void)addModule:(id)a0;
- (id)getObject:(id)a0;

@end

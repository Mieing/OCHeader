@class NSDictionary, NSArray, NSMutableArray;

@interface HTSEventBuilder : NSObject {
    NSMutableArray *_eventAttributes;
    NSDictionary *_baseParams;
}

@property (readonly, nonatomic) NSDictionary *predefinedParams;
@property (readonly, nonatomic) NSArray *addedAttirbutes;

+ (id)builderWithParams:(id)a0;

- (void)addAttributesFromRoom:(id)a0;
- (id)eventModule;
- (id)eventBelong;
- (id)eventPage;
- (void)addPredefinedParams:(id)a0;
- (id)roomPlugin;
- (id)hardwarePlugin;
- (id)communityPlugin;
- (id)gamePlugin;
- (id)revenuePlugin;
- (id)showPlugin;
- (id)socialPlugin;
- (id)saasPlugin;
- (id)experiencePlugin;
- (id)verticalPlugin;
- (id)vendorPlugin;
- (id)commonPlugin;
- (id)trackPlugins;
- (void)beforeHookAtPlugin:(id)a0 forRoom:(id)a1 andContext:(id)a2 constructor:(id)a3;
- (void)afterHookAtPlugin:(id)a0 forRoom:(id)a1 andContext:(id)a2 constructor:(id)a3;
- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)addAttribute:(id)a0;
- (id)eventType;
- (id /* block */)attribute;
- (id)initWithParams:(id)a0;
- (id)valueForAttribute:(id)a0;
- (id)addAttribute:(id)a0 value:(id)a1;

@end

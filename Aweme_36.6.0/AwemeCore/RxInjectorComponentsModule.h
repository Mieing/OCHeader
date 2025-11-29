@class NSString, NSArray;

@interface RxInjectorComponentsModule : NSObject <RxInjectorModule> {
    NSArray *_modules;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleWithModules:(id)a0;

- (void)bindModule:(id)a0;
- (void).cxx_destruct;
- (id)initWithModules:(id)a0;
- (id)init;
- (id)modules;
- (id)__modules;

@end

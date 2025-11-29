@class NSArray, NSString;

@interface RxInjectorAnnotationBasedModule : NSObject <RxInjectorModule>

@property (readonly, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) id /* block */ binderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleWithAnnotations:(id)a0 binderBlock:(id /* block */)a1;

- (id)initWithAnnotations:(id)a0 binderBlock:(id /* block */)a1;
- (void)bindModule:(id)a0;
- (void).cxx_destruct;

@end

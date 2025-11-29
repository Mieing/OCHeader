@protocol IESServiceProvider;

@interface ACCComponentsFactory : NSObject

@property (retain, nonatomic) id<IESServiceProvider> context;

- (void)loadComponents;
- (void)assemblyComponent:(id)a0;
- (id)componentWithClass:(Class)a0 featureConfig:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

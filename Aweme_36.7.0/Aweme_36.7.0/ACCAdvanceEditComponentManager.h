@class NSArray, NSString;
@protocol IESServiceProvider;

@interface ACCAdvanceEditComponentManager : NSObject <ACCAdvanceEditComponentManager>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (copy, nonatomic) NSArray *loadedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponents;
- (void)assemblyComponent:(id)a0;
- (void)componentsDidUnload;
- (void)componentsDidLoad;
- (void)componentsWillAppear;
- (void)componentsDidAppear;
- (void)componentsWillDisappear;
- (void)componentsDidDisappear;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

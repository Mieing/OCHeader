@class NSString, NSMutableArray;
@protocol IESServiceProvider;

@interface ACCTrimCropComponentManager : NSObject <ACCTrimCropComponentManager>

@property (readonly, weak, nonatomic) id<IESServiceProvider> context;
@property (retain, nonatomic) NSMutableArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponents;
- (void)assemblyComponent:(id)a0;
- (void)componentsDidLoad;
- (void)componentsWillAppear;
- (void)componentsDidAppear;
- (void)componentsWillDisappear;
- (void)componentsDidDisappear;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)willTransitionIn;

@end

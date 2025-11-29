@class NSMutableArray;
@protocol IESServiceProvider;

@interface DVEModuleManager : NSObject

@property (retain, nonatomic) NSMutableArray *loadedModules;
@property (retain, nonatomic) id<IESServiceProvider> context;

- (void)prepareForViewDidLoad;
- (void)prepareForWillAppear;
- (void)prepareForDidAppear;
- (void)prepareForWillDisappear;
- (void)prepareForDidDisappear;
- (void)prepareForAnimationDidCompletion;
- (void)prepareForFirstFrameDidRender;
- (void)loadModules;
- (id)componentWithClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addComponent:(id)a0;

@end

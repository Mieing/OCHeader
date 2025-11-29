@class NSString, AWEAwemeModel;
@protocol AWECommerceComponentContext;

@interface AWEAdComponentRendManager : NSObject <AWECommerceComponentProtocol, AWEAdComponentRendManager>

@property (copy, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ playerStartPlayHandler;
@property (copy, nonatomic) id /* block */ feedVideoPlaybackTimeHandler;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (nonatomic) BOOL hasLoad;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (long long)loadOptimizationWithModel:(id)a0;

- (void)setupVideoStartMonitor;
- (void)setupVideoProgressMonitor;
- (void)setupVideoMonitorFree;
- (void)renderNormal;
- (void).cxx_destruct;
- (void)reset;
- (void)willDisplay;

@end

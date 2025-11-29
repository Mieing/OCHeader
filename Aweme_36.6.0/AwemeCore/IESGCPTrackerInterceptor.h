@class NSString, IESGCPTrackerNode, UIView, IESGCPTrackerHooker;

@interface IESGCPTrackerInterceptor : NSObject <IESGCPTrackerInterceptor>

@property (weak, nonatomic) IESGCPTrackerNode *trackingNode;
@property (weak, nonatomic) UIView *trackingView;
@property (retain, nonatomic) IESGCPTrackerHooker *hooker;
@property (nonatomic) BOOL enableClickEventInterceptOpt;
@property (readonly, nonatomic) long long interceptType;
@property (copy, nonatomic) id /* block */ pageNodeExposeEvent;
@property (copy, nonatomic) id /* block */ nodeClickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInterceptor;
- (void)removeHookingObject:(id)a0 forSelector:(SEL)a1;
- (BOOL)hookWithObject:(id)a0 selector:(SEL)a1 withOptions:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)removeHookingObject:(id)a0;
- (id)initWithNode:(id)a0 interceptorType:(long long)a1;
- (void)stopInterceptor;
- (BOOL)isSupportInterceptType:(long long)a0;
- (BOOL)isTrackingPageNode;
- (BOOL)couldInterceptTraceView;
- (void)notifyPageNodeExposedEventChange:(BOOL)a0;
- (void)notifyClickEvent;
- (BOOL)hookTrackingViewSelector:(SEL)a0 withOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)recursionFindTrackingSuperview:(id /* block */)a0;
- (void).cxx_destruct;

@end

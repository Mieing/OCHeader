@class ACCCameraSubscription, NSString;
@protocol IESServiceProvider;

@interface ACCSideslipPropPanelEditorEventDispatchService : NSObject <ACCSideslipPropPanelEditorEventDispatchServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performEventSelector:(SEL)a0 realPerformer:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end

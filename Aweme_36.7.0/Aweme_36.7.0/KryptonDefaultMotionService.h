@class NSString;
@protocol KryptonMotionManagerInvoker;

@interface KryptonDefaultMotionService : NSObject <KryptonMotionService>

@property (retain, nonatomic) id<KryptonMotionManagerInvoker> invoker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMotionManager;
- (void).cxx_destruct;

@end

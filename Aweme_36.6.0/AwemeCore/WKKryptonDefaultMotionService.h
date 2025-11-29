@class NSString;
@protocol WKKryptonMotionManagerInvoker;

@interface WKKryptonDefaultMotionService : NSObject <WKKryptonMotionService>

@property (retain, nonatomic) id<WKKryptonMotionManagerInvoker> invoker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMotionManager;
- (void).cxx_destruct;

@end

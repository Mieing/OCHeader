@class NSObject;
@protocol OS_dispatch_queue;

@interface OIDAuthStatePendingAction : NSObject

@property (readonly, nonatomic) id /* block */ action;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)initWithAction:(id /* block */)a0 andDispatchQueue:(id)a1;
- (void).cxx_destruct;

@end

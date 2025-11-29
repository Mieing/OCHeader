@protocol AWEPzComponentProtocol;

@interface AWEUGKitComponent : NSObject

@property (retain, nonatomic) id<AWEPzComponentProtocol> component;

- (void)hideComponent;
- (void)showComponent;
- (void)addComponent;
- (void)hideAndRemoveComponent;
- (void)addAndShowComponent;
- (id)initWithPzComponent:(id)a0;
- (void)consumeComponent;
- (void)removeComponent;
- (void).cxx_destruct;

@end

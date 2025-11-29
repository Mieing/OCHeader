@class AWEKefuFloatingWindowBaseStateConfig;
@protocol AWEKefuFloatingWindowControllerProtocol;

@interface AWEKefuFloatingWindowBaseController : NSObject

@property (weak, nonatomic) id<AWEKefuFloatingWindowControllerProtocol> delegate;
@property (readonly, nonatomic) AWEKefuFloatingWindowBaseStateConfig *stateConfig;

- (id)initWithStateConfig:(id)a0;
- (void)didChangeExpandState:(BOOL)a0;
- (void).cxx_destruct;
- (void)invalidate;

@end

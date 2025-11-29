@protocol EcsActionHandlerDelegate;

@interface EcsActionHandler_Base : NSObject

@property (weak, nonatomic) id<EcsActionHandlerDelegate> jsEventHandler;
@property (nonatomic) unsigned long long scene;

- (void)dealloc;
- (id)initWithJsEventHandler:(id)a0;
- (void)handleAction:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;
@protocol IESIMMessageListUITaskService, AWEIMMessageTableViewInterface;

@interface AWEIMMessageListAnimationComponent : AWEIMComponentBase <AWEIMFlexListAnimationInterface>

@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentCenter;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)animationWithConfig:(id)a0 before:(id /* block */)a1 animation:(id /* block */)a2 completion:(id /* block */)a3;
- (void)doAnimationWithConfig:(id)a0 task:(id)a1 updateCellBlock:(id /* block */)a2 before:(id /* block */)a3 animation:(id /* block */)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)enqueueTask:(id /* block */)a0;

@end

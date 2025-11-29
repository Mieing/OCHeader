@class NSString, UIDropInteraction;

@interface AWEIMMessageListDragAndDropComponent : AWEIMComponentBase <UIDropInteractionDelegate>

@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void).cxx_destruct;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;

@end

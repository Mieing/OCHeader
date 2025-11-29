@class IESIMGroupAICloneComponentContext, NSArray, NSString, UIViewController;
@protocol AWEIMHalfScreenContainerVCProtocol;

@interface IESIMGroupAICloneViewController : AWEIMComponentViewController <AWEIMComponentManagerDependency, AWEIMHalfScreenContainerScrollProtocol, AWEIMHalfScreenContainerVCDelegate, IESIMGroupAICloneViewControllerProtocol>

@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) NSArray *lazyComponents;
@property (retain, nonatomic) IESIMGroupAICloneComponentContext *context;
@property (weak, nonatomic) UIViewController<AWEIMHalfScreenContainerVCProtocol> *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)externalAssignTopDragHeight;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (id)lazyComponentsNameWithContext:(id)a0;
- (void)setDidAddBlock:(id /* block */)a0;
- (void)setDidPopBlock:(id /* block */)a0;
- (id)initWithConversation:(id)a0 componentNames:(id)a1 lazyComponentNames:(id)a2 trackParams:(id)a3;
- (void).cxx_destruct;
- (id)scrollView;
- (void)viewDidLoad;
- (void)didTapCloseButton;

@end

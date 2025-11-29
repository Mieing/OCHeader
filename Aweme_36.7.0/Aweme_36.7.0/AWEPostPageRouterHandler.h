@class NSString, AWEPostPageContext, NSHashTable, UIViewController;

@interface AWEPostPageRouterHandler : NSObject <AWEPostPageRouterService>

@property (retain, nonatomic) AWEPostPageContext *context;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSHashTable *intepreters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeCurrentPage;
- (void)bindServices:(id)a0;
- (void)dismissAniamted:(BOOL)a0 completion:(id /* block */)a1;
- (void)didPublishTransition;
- (void)dismissAniamtedWhenSaveDraft:(BOOL)a0 completion:(id /* block */)a1;
- (void)present:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentNavigationViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)addIntepreter:(id)a0;
- (void)didEndCreation;
- (void).cxx_destruct;
- (id)rootPresentingViewController;

@end

@class NSString, AWEPadSplitPageContext;
@protocol AWEPadSplitViewService, AWEPadSplitViewBizAdapter;

@interface AWEPadSplitSecondaryViewController : UINavigationController <AWEPadSplitViewSecondaryController>

@property (nonatomic) BOOL isPopTransition;
@property (nonatomic) BOOL isPadSplitting;
@property (readonly, copy, nonatomic) NSString *splitViewScene;
@property (weak, nonatomic) AWEPadSplitPageContext *splitViewContext;
@property (weak, nonatomic) id<AWEPadSplitViewService> splitService;
@property (retain, nonatomic) id<AWEPadSplitViewBizAdapter> splitViewAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateFromViewController:(id)a0;

- (id)protocolViewControllers;
- (void)cleanWithViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)viewDidLoad;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)refreshDelegate;

@end

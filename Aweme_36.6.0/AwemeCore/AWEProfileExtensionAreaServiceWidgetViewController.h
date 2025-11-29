@class UIView, NSString, AWEProfileExtensionProfilePreviewView, AWEProfileServiceComponentToolBarView, AWEProfileServiceWidgetEditAreaViewController, AWEProfileContext, UILabel, UIScrollView;
@protocol AWEProfileExtensionAreaAllCardContainerProtocol;

@interface AWEProfileExtensionAreaServiceWidgetViewController : UIViewController <AWEProfileExtensionAreaProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) AWEProfileServiceComponentToolBarView *toolBarView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWEProfileExtensionProfilePreviewView *previewView;
@property (retain, nonatomic) AWEProfileServiceWidgetEditAreaViewController *editAreaVC;
@property (weak, nonatomic) AWEProfileContext *context;
@property (weak, nonatomic) id<AWEProfileExtensionAreaAllCardContainerProtocol> delegate;
@property (readonly, nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithParamDict:(id)a0;
- (void)setProfileContext:(id)a0;
- (void)resetDataAndEditState;
- (id)logPageTypeString;
- (BOOL)checkBlockBack;
- (BOOL)checkBlockSwitchPage;
- (void)switchPageWithNextAction:(id /* block */)a0;
- (BOOL)checkBlockTransition;
- (void)backWithNextAction:(id /* block */)a0;
- (void)transitionWithNextAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)title;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end

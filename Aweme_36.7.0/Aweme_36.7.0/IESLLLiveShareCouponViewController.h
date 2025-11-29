@class NSDictionary, NSString, UIView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol, IESLLLiveShareCouponVCDelegate;

@interface IESLLLiveShareCouponViewController : UIViewController <BDXContainerLifecycleProtocol, IESLLLiveShareCouponVC>

@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) BOOL lynxLoadFinished;
@property (copy, nonatomic) NSDictionary *updateData;
@property (copy, nonatomic) id /* block */ sharePanelCloseBlock;
@property (weak, nonatomic) id<IESLLLiveShareCouponVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidFirstScreen:(id)a0;
- (void)trackWithEvent:(id)a0 param:(id)a1;
- (void)bindEvents;
- (void)registerMessageCenter;
- (void)setupLynxUI;
- (id)initWithUpdateData:(id)a0;
- (void)configSharePanelCloseBlock:(id /* block */)a0;
- (void)updateLynxViewWithData:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end

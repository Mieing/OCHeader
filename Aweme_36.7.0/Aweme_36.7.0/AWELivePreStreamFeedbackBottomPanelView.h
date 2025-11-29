@class NSString, AWELivePreStreamFeedbackViewModel, UIView, UITapGestureRecognizer;
@protocol IESHYContainerProtocol;

@interface AWELivePreStreamFeedbackBottomPanelView : UIView <IESHYHybridViewLifecycleProtocol, AWELivePreStreamAlertPriorityProtocol>

@property (retain, nonatomic) UIView *streamView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *feedGoodContainer;
@property (retain, nonatomic) AWELivePreStreamFeedbackViewModel *viewModel;
@property (nonatomic) struct CGSize { double width; double height; } rawSize;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFirstScreen;
- (void)removeLiveAlertElementWithCompletion:(id /* block */)a0;
- (void)showLiveAlertElementWithCompletion:(id /* block */)a0;
- (unsigned long long)elementConfig;
- (void)bindViewModel:(id)a0;
- (void)p_handleTapGesture:(id)a0;
- (void)renderLynxView:(id)a0 fallbackUrl:(id)a1;
- (void)updateFeedGoodContainerSize;
- (id)elementView;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (void)reset;
- (id)initWithParentView:(id)a0;

@end

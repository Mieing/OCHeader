@class NSString, UIView;
@protocol ACCEditSpecialEffectServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditTransitionServiceProtocol, ACCEditVideoFilterServiceProtocol, ACCEditorOneClickFilmingViewModelProtocol, ACCOCFViewContainerProtocol;

@interface ACCEditorOneClickFilmingViewController : ACCViewController <AWEMediaSmallAnimationProtocol>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (retain, nonatomic) id<ACCEditSpecialEffectServiceProtocol> effectService;
@property (retain, nonatomic) id<ACCEditVideoFilterServiceProtocol> filterService;
@property (retain, nonatomic) id<ACCOCFViewContainerProtocol> viewContainer;
@property (retain, nonatomic) id<ACCEditorOneClickFilmingViewModelProtocol> viewModel;
@property (retain, nonatomic) UIView *previewSnap;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } customViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createOneClickFilmingVCWithInputData:(id)a0;

- (double)bottomViewOffSetBottom;
- (id)mediaSmallMediaContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (id)mediaSmallBottomView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaBigMediaFrame;
- (id)mediaSmallTopView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallTopViewFrame;
- (void)willTransitionIn:(id /* block */)a0;
- (void)prepareForLoadComponent;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;

@end

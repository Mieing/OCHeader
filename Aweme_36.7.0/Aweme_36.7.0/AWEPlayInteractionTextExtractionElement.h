@class UIButton, AWEPlayInteractionTextExtractionElementViewModel, NSString;

@interface AWEPlayInteractionTextExtractionElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (nonatomic) double delayTime;
@property (retain, nonatomic) UIButton *extractionButton;
@property (retain, nonatomic) AWEPlayInteractionTextExtractionElementViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (long long)searchAIAbstract;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)animateUnhidden;
- (void)hiddenExtraction;
- (void)extractionButtonIsShow:(BOOL)a0;
- (void)textExtractionClick;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

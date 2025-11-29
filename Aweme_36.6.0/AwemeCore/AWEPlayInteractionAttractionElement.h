@class UIButton, NSString;
@protocol AWEAdAttractionView;

@interface AWEPlayInteractionAttractionElement : AWEPlayInteractionRightElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIButton<AWEAdAttractionView> *attractionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithData:(id)a0;

- (void)viewController_viewWillAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)onAttractionViewShowed;
- (void)onAttractionViewTapped:(id)a0;
- (void)updateAttractionView;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end

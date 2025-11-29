@class AWELiveTabSkyAccessibilityElement, NSTimer, IESLiveImageView, NSString, AWELiveAppointmentSkyLightView, AWELiveTabPreStreamViewModel;
@protocol AWELiveTabSkyLightViewProtocol;

@interface AWELiveTabSkyLightViewController : UIViewController <AWELiveTabSkyLightViewDelegate>

@property (retain, nonatomic) IESLiveImageView *backgroundImageView;
@property (retain, nonatomic) AWELiveAppointmentSkyLightView<AWELiveTabSkyLightViewProtocol> *skyLightView;
@property (retain, nonatomic) NSTimer *refreshTimer;
@property (nonatomic) BOOL showSkyLight;
@property (retain, nonatomic) AWELiveTabSkyAccessibilityElement *accessBilityElement;
@property (retain, nonatomic) AWELiveTabPreStreamViewModel *viewModel;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestSkyLightDataWithCompletion:(id /* block */)a0;
- (double)skyLightHeight;
- (void)skylightWillShowWithAnimated:(BOOL)a0;
- (void)skylightDidShowWithAnimated:(BOOL)a0;
- (void)skylightWillHiddenWithAnimated:(BOOL)a0;
- (void)skylightDidHiddenWithAnimated:(BOOL)a0;
- (double)skyLightBottomOffset;
- (void)skyLightWithDisable:(BOOL)a0;
- (id)tabSkyAccessibilityElements;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;

@end

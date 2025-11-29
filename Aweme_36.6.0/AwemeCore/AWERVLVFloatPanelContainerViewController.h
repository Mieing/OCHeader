@class AWERVLVBasePanelViewModel, NSString;
@protocol AWERVLVFloatPanelProtocol;

@interface AWERVLVFloatPanelContainerViewController : AWERVMetaPanelViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWERVLVBasePanelViewModel<AWERVLVFloatPanelProtocol> *panelViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPanelHeight:(double)a0;
- (void)refreshModel:(id)a0;
- (void)dismissPanelVCWithCompletion:(id /* block */)a0;
- (void)setupPanel:(id)a0;
- (id)panelContentView;
- (void)removePanelViewModel;
- (void)floatPanelDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)closeButtonTapped;

@end

@class UIView, AWERVLVPushRightPanelContainer, AWERVLVRightPanelContentView, AWERVLVBasePanelViewModel, AWEAwemeModel, NSString, NSDictionary, NSObject;
@protocol AWERVLVRightPanelProtocol, AWERelatedVideoDetailVideoContainerViewControllerDelegate, AWERVLVRightPushPanelProtocol;

@interface AWERVLVRightPanelContainerViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWERVLVBasePanelViewModel<AWERVLVRightPushPanelProtocol> *pushPanelViewModel;
@property (retain, nonatomic) AWERVLVBasePanelViewModel<AWERVLVRightPanelProtocol> *panelViewModel;
@property (retain, nonatomic) AWERVLVPushRightPanelContainer *pushPanelContainer;
@property (retain, nonatomic) AWERVLVRightPanelContentView *contentView;
@property (retain, nonatomic) UIView *sepratorLineView;
@property (retain, nonatomic) UIView *captureView;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL expanded;
@property (weak, nonatomic) NSObject<AWERelatedVideoDetailVideoContainerViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInputView;
- (void)dismissPanelWithCompletion:(id /* block */)a0;
- (void)refreshModel:(id)a0 params:(id)a1;
- (void)refreshRelatedVideos:(id)a0 scene:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)updateContainerWithPanelViewModelArray:(id)a0;
- (void)pushPanelWithViewModel:(id)a0;
- (void)refreshPushPanelModel:(id)a0;
- (void)albumInfoDidLoad:(BOOL)a0;
- (void)updateContainerWithPanelViewModel:(id)a0;
- (void)captureViewDidTapped;
- (void)pushPanelDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

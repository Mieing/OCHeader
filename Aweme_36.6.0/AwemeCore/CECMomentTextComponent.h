@class UISwipeGestureRecognizer, NSArray, CECMomentCameraSubModeViewModel, CECMomentCameraPublishViewModel, CECMomentCameraPreviewViewModel, CECMomentTextViewModel, NSString, CECMomentTextContainerView;
@protocol CECMomentCameraSubModeService, CECMomentCameraFlowService;

@interface CECMomentTextComponent : AFDMomentCameraBaseComponent <CECMomentTextContainerViewDelegate, CECMomentSegmentedControlDelegate, CECMomentCameraSubModeSwitchServiceSubscriber>

@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (retain, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (retain, nonatomic) CECMomentCameraPublishViewModel *publishViewModel;
@property (retain, nonatomic) CECMomentCameraSubModeViewModel *subModeViewModel;
@property (retain, nonatomic) CECMomentTextViewModel *viewModel;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeDownToDismissKeyboardRecognizer;
@property (retain, nonatomic) CECMomentTextContainerView *textContainerView;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) NSArray *ignoreViewsName;
@property (nonatomic) BOOL hasAppeared;
@property (copy, nonatomic) id /* block */ showBoardBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (BOOL)canShowKeyboard;
- (void)componentDidLoad;
- (void)subModeServiceWillChangeToMode:(id)a0 fromMode:(id)a1;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void)componentDidAppear:(BOOL)a0;
- (void)addTapGestures;
- (void)addSwipeDownToDismissKeyboardGestures;
- (void)handleContainerViewTapGesture:(id)a0;
- (void)handleInputBubbleTapGesture:(id)a0;
- (void)handleSwipeDirectionDownGesture:(id)a0;
- (BOOL)p_isNeedIgnore:(id)a0;
- (void)updateUIWithIsEnterNotesMode:(BOOL)a0;
- (void)showKeyboardWhenSwitchText;
- (void)inputTextDidChange:(id)a0 backgroundColor:(id)a1;
- (void)inputTextDidBeginEditing:(id)a0;
- (void)inputTextDidEndEditing:(id)a0;
- (void)inputTextDidReachMaxInputLimit:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end

@class NSString, UIImageView, UIView, AWECoverEditorNLEEditorInputData;
@protocol AWECoverEditorNLEEditorLayoutManager, ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCEditorRecoverServiceProtocol, ACCEditServiceProtocol;

@interface AWECoverNLEEditorPreviewLayoutComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<AWECoverEditorNLEEditorLayoutManager> layoutManager;
@property (weak, nonatomic) id<ACCEditorRecoverServiceProtocol> recoverService;
@property (nonatomic) struct CGSize { double width; double height; } originPlayerSize;
@property (weak, nonatomic) UIView *snapshotContainerView;
@property (weak, nonatomic) UIImageView *snapshotView;
@property (nonatomic) BOOL keyboardShowed;
@property (nonatomic) BOOL viewAppeared;
@property (retain, nonatomic) UIView *mediaContainerView;
@property (retain, nonatomic) AWECoverEditorNLEEditorInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (double)topSpace;
- (double)bottomSpace;
- (void).cxx_destruct;
- (void)keyboardWillHideNotification:(id)a0;
- (void)appWillEnterForeground;
- (void)keyboardWillShowNotification:(id)a0;

@end

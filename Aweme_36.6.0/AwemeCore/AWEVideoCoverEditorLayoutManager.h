@class AWECoverEditorNLEEditorInputData, NSString, UIView;
@protocol ACCEditViewContainer, IESServiceProvider;

@interface AWEVideoCoverEditorLayoutManager : NSObject <UIGestureRecognizerDelegate, AWECoverEditorNLEEditorLayoutManager>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *navBarView;
@property (retain, nonatomic) UIView *controlBarView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIView *bottomSwitchView;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) AWECoverEditorNLEEditorInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)bottomContainerHeight;
- (double)navBarHeight;
- (double)controlBarHeight;
- (double)bottomPanelHeight;
- (void)picTemplateDidSelect;
- (void)bottomTabDidSwitch;
- (BOOL)enableInteractionRefactor;
- (void)editAreaDidTouch;
- (double)bottomPanelMinHeight;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithServiceProvider:(id)a0;
- (void)render;

@end

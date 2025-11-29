@class NSString, UIView;
@protocol ACCEditViewContainer, IESServiceProvider;

@interface AWECoverEditorNLEEditorLayoutManager : NSObject <AWECoverEditorNLEEditorLayoutManager>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *navBarView;
@property (retain, nonatomic) UIView *controlBarView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIView *bottomSwitchView;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)bottomContainerHeight;
- (double)navBarHeight;
- (double)controlBarHeight;
- (double)bottomPanelHeight;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)render;

@end

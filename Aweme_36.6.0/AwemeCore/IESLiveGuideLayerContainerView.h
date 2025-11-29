@class UIView, NSString, IESLiveGuideModel, UIButton, IESLiveStackTemplate, UIViewController, IESGuideContainerKitEngine, IESLiveGuideLayoutCommonContainer;
@protocol IESLiveHierarchyContainerView;

@interface IESLiveGuideLayerContainerView : NSObject <IESLiveGuideActions, IESLiveStackTemplateFilterProtocol, IESLiveGuideContainerProvider>

@property (weak, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *contentContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *videoContentContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *audioContentContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *gameContentContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *peripheContentContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *dailyContentContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *commonContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *popupContainer;
@property (retain, nonatomic) UIView *cameraContainer;
@property (retain, nonatomic) IESLiveGuideLayoutCommonContainer *commonContentContainer;
@property (retain, nonatomic) IESLiveGuideLayoutCommonContainer *commonDailyContainer;
@property (retain, nonatomic) IESGuideContainerKitEngine *containerKitEngine;
@property (retain, nonatomic) IESLiveStackTemplate *stackTemplate;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL enableBack;
@property (copy, nonatomic) id /* block */ closeHandler;
@property (copy, nonatomic) id /* block */ backHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initViews;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)filterAddView:(id)a0;
- (void)initContainerView;
- (void)setupCameraView;
- (id)initWithViewController:(id)a0 guideModel:(id)a1 diContext:(id)a2;
- (void)buildContentView;
- (void)initCommonContentContainer;
- (void)initDailyContentContainer;
- (void)initCloseButton;
- (id)commonContainerBackUpData;
- (void)handleCloseAction;
- (void).cxx_destruct;
- (void)setup;

@end

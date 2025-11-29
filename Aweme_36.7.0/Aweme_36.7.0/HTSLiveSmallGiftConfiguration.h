@class NSString, NSArray;
@protocol IESLiveRevenueInteractModule, HTSLivePluginLayoutMachineProvider, IESLiveInteractionModule, IESLiveMessageListLayoutService;

@interface HTSLiveSmallGiftConfiguration : NSObject <IESLiveInteractAction, IESLivePublicScreenLayoutSubscriber, IESLiveMessageInteractionModuleCommentAction, IESLiveSmallGiftConfigurationProtocol>

@property (nonatomic) double originY;
@property (nonatomic) double previousOriginY;
@property (nonatomic) double viewSpacing;
@property (nonatomic) double giftWidth;
@property (nonatomic) double userEnterViewHeight;
@property (nonatomic) double userEnterViewSpacing;
@property (nonatomic) double overlapHeight;
@property (nonatomic) double maskHeight;
@property (retain, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (nonatomic) unsigned long long currentScene;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) id<IESLiveMessageListLayoutService> messageListLayoutService;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModule;
@property (retain, nonatomic) id<HTSLivePluginLayoutMachineProvider> pluginLayoutMachineProvider;
@property (nonatomic) BOOL abSettingEnable;
@property (nonatomic) BOOL isKeyboardShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long smallGiftViewCount;
@property (nonatomic) unsigned long long smallGiftMode;
@property (copy, nonatomic) NSArray *giftViewFrames;
@property (nonatomic) BOOL isOnMessageListOptimizationScene;
@property (nonatomic) BOOL isOnLandspaceContentLiveOptimizationScene;
@property (nonatomic) BOOL isHighValueAreaMoveDownScene;
@property (nonatomic) BOOL smallGiftViewSingleChannelEnabled;
@property (nonatomic) double scale;
@property (nonatomic) BOOL isVSRoom;

- (void)didSetAttachingDIContext;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)setInteractiveScene:(unsigned long long)a0;
- (void)resetFrame;
- (void)userEnterViewHeightChanged:(double)a0;
- (void)setFrameOriginY:(double)a0;
- (void)fragmentOrientationChanged:(long long)a0 inGame:(BOOL)a1;
- (BOOL)shouldUseSideStyle;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (void)resetFrameForSideStyle;
- (double)realGiftViewHeight;
- (BOOL)shouldUseSmallScale;
- (void)checkForLandscape;
- (BOOL)needHideForLandscape;
- (void)adjustMessageListMaskHeightWithCount:(long long)a0;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (id)init;

@end

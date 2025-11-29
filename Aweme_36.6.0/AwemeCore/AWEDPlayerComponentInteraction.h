@class NSString;

@interface AWEDPlayerComponentInteraction : AWEDPlayerBaseComponent <AWEDPlayerComponentInteractionProtocol>

@property (nonatomic) BOOL isHideBottomGardientViewBeforeExpand;
@property (nonatomic) BOOL hasAddBottomMaskImageView;
@property (nonatomic) unsigned long long lastBottomMaskType;
@property (nonatomic) double bottomMaskImageHeight;
@property (nonatomic) BOOL isHideBottomImageViewBeforeExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)updatePlayerIfNeeded;
- (id)aAWEPadModuleAdapter;
- (double)topGradientHeight;
- (double)bottomGradientHeight;
- (double)getBottomMaskImageHeight;
- (void)insertPlayerViewDidSuccess;
- (void)interactionDidShowMaskModify:(id)a0;
- (void)onAuthorNameCreated:(id)a0;
- (void)onAuthorNameMovedForMask:(id)a0;
- (void)initializeBottomGradientProcessorConfig;
- (void)addBottomImageViewIfNeeded;
- (double)bottomGradientAlpha;
- (void)resetBottomGradientFrameWithDelta:(double)a0;
- (void)setBottomImageMaskHidden;
- (void)refreshBottomGradientViewWithExpand:(BOOL)a0;
- (id)bottomGradientColor_description;
- (void)setupBottomGradientColorDetect;
- (void)trackBottomGradientDynamicResult;
- (id)currentInteractionVC;
- (void)hideGradientViewIfNeeded:(id)a0;
- (void)trackBottomGradientProcessorConfigWithModel:(id)a0 config:(id)a1;
- (double)calculateBottomImageViewHeight:(id)a0;
- (void)createNewMaskImageWithType:(unsigned long long)a0;
- (BOOL)checkIfBottomImageTypeChange;
- (void)addCoverGradientView;
- (void)addGradientViews;
- (void)addVideoDeletedView;
- (void)interactionDescriptionLabelAnimation:(id)a0;
- (void)sendEventWithBottomGradientProcessorResult:(id)a0;
- (void)prepareForDisplay;
- (void)reset;
- (void)viewDidLoad;
- (id)topGradientColor;
- (id)bottomGradientColor;

@end

@class AWEPlayInteractionDescriptionContext, NSString, NSObject;
@protocol AWEAdMannorAdLinkMoreManager;

@interface AWEPlayInteractionDescriptionAdController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionRenderProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (weak, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;
@property (retain, nonatomic) NSObject<AWEAdMannorAdLinkMoreManager> *mannorAdLinkMoreManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackProductEntranceShowIfNeededWithContext:(id)a0;
- (void)showLongVideoAdDescriptionText:(id)a0;
- (id)getTailExtraModelWithContext:(id)a0;
- (id)calculateTruncationTokenWithContext:(id)a0;
- (id)createAdMoreLinkImageWithContext:(id)a0;
- (BOOL)enableLargeFontAdapt;
- (BOOL)usePanelGuideWithContext:(id)a0;
- (id)createLargeFontAdaptedMoreViewWithLabel:(id)a0;
- (id)createLargeFontAdaptedLinkMoreViewWithModel:(id)a0;
- (id)advanceParserDescriptionWithContext:(id)a0;
- (id)parserTextExtraForDescriptionWithContext:(id)a0;
- (id)setTruncationTokenIfNeedWithContext:(id)a0;
- (id /* block */)getDescriptionLabelTapActionWithContext:(id)a0;
- (void)viewController_willDisplayWithContext:(id)a0;
- (id)setShadowWithAdMoreTag:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end

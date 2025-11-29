@class AWEProfileExtensionAreaCommonParamModel, NSString, AWEPageContext;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol, AWEProfileContextCommonProtocol;

@interface AWEProfileExtensionAreaCreatorPlatCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (weak, nonatomic) AWEPageContext<AWEProfileContextCommonProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;
+ (unsigned long long)contributionGuideShowPositionWithUserModel:(id)a0;
+ (BOOL)shouldPublishGuideMoveUpWithUserModel:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)configDelegate:(id)a0;
- (void)configRichContentConfig:(id)a0 withCardOffset:(double)a1 isScrollable:(BOOL)a2;
- (void)handleContributionGuideShow;
- (void).cxx_destruct;
- (void)dealloc;

@end

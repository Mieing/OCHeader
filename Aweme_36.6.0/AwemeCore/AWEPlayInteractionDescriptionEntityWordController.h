@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEPlayInteractionDescriptionEntityWordController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (retain, nonatomic) NSMutableArray *searchWordArray;
@property (nonatomic) BOOL hasSearchText;
@property (retain, nonatomic) NSMutableDictionary *searchWordShowMark;
@property (nonatomic) long long trendingWordsShowTrackPostMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parserAttributesForDescriptionWithContext:(id)a0;
- (void)willParserExtraModelsWithContext:(id)a0;
- (void)viewController_viewDidAppearWithContext:(id)a0;
- (void)viewController_viewWillDisappearWithContext:(id)a0;
- (void)viewController_willDisplayWithContext:(id)a0;
- (void)viewController_didEndDisplayingWithContext:(id)a0;
- (void)descriptionLabelDidClickIsExpand:(BOOL)a0 parserContext:(id)a1;
- (void)resetController;
- (BOOL)isEntityWordSearchNSLink:(id)a0;
- (BOOL)awe_isHotSpotTagNSLink:(id)a0;
- (BOOL)enableChangeTrackTime;
- (void)trackTrendingWordsShowByMode:(long long)a0 parserContext:(id)a1;
- (void)trackTrendingShowWithContext:(id)a0;
- (id)addEntityWordResearchNSLinkAttributeWithContext:(id)a0;
- (void)handleLinksForDescriptionAttributedStringWithContext:(id)a0;
- (void)handleEntityWordSearchNSLinkForDescriptionWithContext:(id)a0;
- (void)recordFalseTouchWithContext:(id)a0;
- (void)trackTrendingWordsClickWithContext:(id)a0 linkExtraMoel:(id)a1;
- (void)trackTrendingWordsShow:(id)a0 withWordsPosition:(id)a1 withGroupId:(id)a2 parserContext:(id)a3;
- (void).cxx_destruct;
- (void)reset;

@end

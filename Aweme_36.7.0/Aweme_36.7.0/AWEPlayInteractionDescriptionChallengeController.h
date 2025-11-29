@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEPlayInteractionDescriptionChallengeController : NSObject <AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (retain, nonatomic) NSMutableArray *hashTagArray;
@property (retain, nonatomic) NSMutableDictionary *hashTagShowMark;
@property (nonatomic) long long hashTagShowTrackPostMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFromEcomSearch:(id)a0;
+ (id)createHashtagExtraModelWithTextExtra:(id)a0 descriptionString:(id)a1 awemeModel:(id)a2 parserContext:(id)a3;

- (id)parserTextExtraForDescriptionWithContext:(id)a0;
- (void)viewController_viewWillDisappearWithContext:(id)a0;
- (void)viewController_willDisplayWithContext:(id)a0;
- (void)viewController_didEndDisplayingWithContext:(id)a0;
- (void)descriptionLabelDidClickIsExpand:(BOOL)a0 parserContext:(id)a1;
- (void)resetController;
- (void)trackTitleHashtagShowWithContext:(id)a0;
- (void)trackChallengTitleShowByMode:(long long)a0 parserContext:(id)a1;
- (void)trackChallengTitleShow:(id)a0 withHashTagId:(id)a1 withGroupId:(id)a2 parserContext:(id)a3;
- (void).cxx_destruct;
- (void)reset;

@end

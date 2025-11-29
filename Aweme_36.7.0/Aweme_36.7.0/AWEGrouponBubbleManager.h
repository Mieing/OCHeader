@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEGrouponBubbleManager : NSObject <AWEGrouponGeneralGiudeHandleProtocol, AWEMRGrouponGuideBubbleDelegateProtocol>

@property (nonatomic) BOOL nearbyBubbleIsShowing;
@property (nonatomic) BOOL grouponIsShowing;
@property (retain, nonatomic) NSDictionary *nearbyBubbleShowImps;
@property (copy, nonatomic) id /* block */ bubbleShowCompletion;
@property (copy, nonatomic) id /* block */ bubbleClickCompletion;
@property (copy, nonatomic) id /* block */ bubbleDisAppearCompletion;
@property (retain, nonatomic) NSMutableDictionary *currentShowingBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)adaptFreqsArrayWithJsons:(id)a0;
- (id)gloabalLifeBubbleFreqsWithPageType:(long long)a0;
- (BOOL)xTabHasNearby;
- (BOOL)__isNearbySelectedInXtab;
- (id)bubbleAvoidRuleWithModel:(id)a0;
- (id)normalFrequencyControllWithBubbleModel:(id)a0;
- (BOOL)isEscapeSettings:(unsigned long long)a0 withBubbleModel:(id)a1;
- (id)festivalBubbleRecordKey:(long long)a0;
- (id)weekendBubbleRecordKey:(long long)a0;
- (void)p_onTriggerShowNearbyGeneralGuideBubble:(id)a0 showCompletion:(id /* block */)a1;
- (id)shouldShowNearbyGuideBubbleWithModel:(id)a0;
- (void)trackBubbleShowResult:(BOOL)a0 notShowReason:(id)a1 generalGuideBubble:(id)a2;
- (id)handleMRBubbleShowCompletion:(id)a0 guideModel:(id)a1 showCompletion:(id /* block */)a2;
- (void)handleMRBubbleClickCompletion:(id)a0 guideModel:(id)a1;
- (void)handleMRBubbleDisappearCompletion:(id)a0 guideModel:(id)a1;
- (id)handleMainFrameBubbleShowResult:(long long)a0 generalGuideBubble:(id)a1;
- (void)setBubbleShowingWithPageType:(long long)a0 showing:(BOOL)a1;
- (void)bubbleShowSucceedWithTypeBubbleModel:(id)a0;
- (void)traceBubbleShowWithBubbleModel:(id)a0;
- (void)onTriggerShowNearbyGeneralGuideBubble:(id)a0 showCompletion:(id /* block */)a1;
- (void)tryShowBubbleWithGeneralBuble:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)canHandleGuideWithMode:(id)a0;
- (void)handleGuideModel:(id)a0 completion:(id /* block */)a1;
- (void)callBackGuideWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)verifyGlobalLiftTabBubbleFreqs;
- (BOOL)shouldGrouponBubbleReverse;
- (void)registeBubbleShowAblityImp:(id)a0 bubbleShowBlk:(id /* block */)a1 bubbleClickBlk:(id /* block */)a2 bubbleDisAppearBlk:(id /* block */)a3;
- (id)currentShowingBubbleWithPageType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

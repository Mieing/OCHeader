@class NSString;

@interface AWEPlayInteractionLikeAlienationUtil : NSObject <AWEPlayInteractionLikeAlienationUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadResourceIfNeededForModels:(id)a0;
+ (BOOL)enableResourceLoadThreadSafeFix;
+ (void)loadResourceWithChannel:(id)a0;
+ (void)trackDiggAlienation:(long long)a0 model:(id)a1 referString:(id)a2 errorMsg:(id)a3;
+ (id)failReasonForDiggAlienationWithModel:(id)a0;
+ (id)jsonResourcePathFromGeckoWithAwemeModel:(id)a0;
+ (id)likeLottieDivideFrameWithModel:(id)a0;
+ (id)likeLottieTotalFrameWithModel:(id)a0;
+ (id)lottieConfigForModel:(id)a0;
+ (id)activityStartTimeForModel:(id)a0;
+ (id)activityEndTimeForModel:(id)a0;
+ (id)failReasonForDoubleClickAlienationWithModel:(id)a0;
+ (void)trackDoubleClickAlienation:(long long)a0 model:(id)a1 referString:(id)a2 errorMsg:(id)a3;
+ (BOOL)isLottieConfigValid:(id)a0;
+ (BOOL)isActivityTimeValidWithModel:(id)a0;
+ (id)gaiyaTokenForModel:(id)a0;
+ (id)diggAlienationInfoForModel:(id)a0;
+ (BOOL)isDiggAlienationOffCmdActiveWithModel:(id)a0;
+ (BOOL)isDoubleClickAlienationOffCmdActiveWithModel:(id)a0;
+ (id)basicFailReasonForDiggAlienationWithModel:(id)a0;
+ (id)basicFailReasonForDoubleClickAlienationWithModel:(id)a0;
+ (BOOL)isCurrentDateValidForModel:(id)a0;
+ (BOOL)enableLikeLongConnectionMigration;
+ (BOOL)isAlienationOffCmdActive:(long long)a0 res:(id)a1;
+ (BOOL)enableLikeAlienationOptV2;
+ (id)fetchDiggLottieAnimationViewWithModel:(id)a0 context:(id)a1 bindStatus:(long long)a2;
+ (id)likeAnimationStartFrameWithModel:(id)a0;
+ (id)likeAnimationEndFrameWithModel:(id)a0;
+ (id)dislikeAnimationStartFrameWithModel:(id)a0;
+ (id)dislikeAnimationEndFrameWithModel:(id)a0;
+ (BOOL)checkIfDoubleClickAlienationValidWithModel:(id)a0 context:(id)a1 bindStatus:(long long)a2;
+ (void)addMessageListeningIfNeeded:(id)a0;
+ (void)removeMessageListening:(id)a0;
+ (void)reportTokenToSlardarIfNeededWithModel:(id)a0 usingState:(unsigned long long)a1;
+ (id)paramsForCoverageRate;
+ (id)paramsForVideoPlayWithModel:(id)a0;


@end

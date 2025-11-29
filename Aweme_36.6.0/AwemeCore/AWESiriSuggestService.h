@class NSString;

@interface AWESiriSuggestService : NSObject <AWESiriSuggestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSiriSuggest;
+ (BOOL)enableSiriSuggestOnlyPlayScene;
+ (BOOL)enableSiriSuggestWithSceneType:(id)a0;
+ (BOOL)enableSiriSuggestConfigFromPushService;
+ (void)donateUserActivityIfNeededWithSceneType:(id)a0 extraTrackParams:(id)a1;
+ (void)donateUserActivityIfNeededWithSceneType:(id)a0 userInfo:(id)a1 extraTrackParams:(id)a2;
+ (id)sceneTypeWithPlaySceneEnterFrom:(id)a0;
+ (id)schemeWithSceneType:(id)a0 userInfo:(id)a1;
+ (BOOL)enableSiriSuggestConfigPlayOnlyHotFeed;
+ (void)donateWidgetSuggestionWithType:(unsigned long long)a0;
+ (void)donateWidgetSuggestionWithKind:(id)a0;
+ (void)donateUserActivityIfNeededWithSceneTypeWithSceneType:(id)a0 usingV3:(BOOL)a1 requestScene:(unsigned long long)a2 timingType:(unsigned long long)a3 userInfo:(id)a4 extraTrackParams:(id)a5;
+ (void)donateIntentWithSceneType:(id)a0 siriIntentsConfig:(id)a1 extraTrackParams:(id)a2;
+ (void)deleteIntentWithIdentifier:(id)a0 extraTrackParams:(id)a1;
+ (void)donateUserActivityIfNeededWithSceneType:(id)a0 userInfo:(id)a1 extraTrackParams:(id)a2 usingV3:(BOOL)a3 requestScene:(unsigned long long)a4 timingType:(unsigned long long)a5;
+ (void)clearDonationAndRecord:(id)a0;
+ (BOOL)enableSiriDonateForSceneType:(id)a0;
+ (void)periodicallyCleanSiriSuggestData:(BOOL)a0;
+ (void)clearSiriSuggestIfNeeded:(BOOL)a0;


@end

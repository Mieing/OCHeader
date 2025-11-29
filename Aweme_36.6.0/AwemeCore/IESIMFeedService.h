@class NSString;

@interface IESIMFeedService : HTSService <IESIMFeedService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestAwemeItemWithID:(id)a0 completion:(id /* block */)a1;
- (void)requestAwemeItemsWithIDs:(id)a0 passThroughParam:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (BOOL)muteAwemeFeatureIsEnabled;
- (BOOL)isAwemeMute;
- (BOOL)isMuteAwemeSwitchOn;
- (void)requestSafetyCheckWithItemIDToRiskLevelJson:(id)a0 referString:(id)a1 potentialRiskLevel:(long long)a2 completion:(id /* block */)a3;
- (BOOL)enablePrepareVideoPlayerInInnerFeedWithRefer:(id)a0;
- (BOOL)preparePlayerWithReferString:(id)a0 awemeModel:(id)a1 canUseCachedPlayer:(BOOL)a2;
- (id)getEpisodeTagText:(id)a0;
- (id)getEpisodeTagTextColor:(id)a0;
- (id)getEpisodeTagBackgroundColor:(id)a0;
- (BOOL)isInPictureInPicture;
- (void)requestAwemeItemsWithIDs:(id)a0 verificationIDs:(id)a1 passThroughParam:(id)a2 params:(id)a3 completion:(id /* block */)a4;
- (void)setReferStringToTargetVCIfNeeded:(id)a0 referString:(id)a1;
- (id)notificationNameOfAWEFeedTableViewControllerWillPlayAwemeEvent;
- (long long)customLocalFilterWithAwemeModel:(id)a0;
- (void)presentRecommendViewViewControllerWithContext:(id)a0;

@end

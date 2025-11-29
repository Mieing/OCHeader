@class AWEStudioFollowShootModel, NSString, NSDictionary;

@interface AWEStudioFollowShotTrackerContext : HTSService <AWERecommendCoreTrackerService>

@property (retain, nonatomic) AWEStudioFollowShootModel *flowShotModel;
@property (copy, nonatomic) NSString *currentAwemeIdentifier;
@property (copy, nonatomic) NSString *lastPlayGid;
@property (copy, nonatomic) NSString *lastpagePlayAuthorId;
@property (copy, nonatomic) NSString *lastpagePlayHashtagNames;
@property (copy, nonatomic) NSString *lastpagePlayMusicId;
@property (copy, nonatomic) NSString *lastpagePlayPropIds;
@property (copy, nonatomic) NSString *lastPagePlayGid;
@property (copy, nonatomic) NSString *lastPageName;
@property (copy, nonatomic) NSString *prePageName;
@property (copy, nonatomic) NSString *prePagePlayGid;
@property (copy, nonatomic) NSString *rootGid;
@property (retain, nonatomic) NSDictionary *backUpCoreMobDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shotTrackerAspect;
+ (id)defaultManager;

- (void)assembleRecommendCoreMobWithCreationId:(id)a0;
- (id)recommendCoreMobMap;
- (BOOL)ignoreCurrentPathWithParams:(id)a0;
- (void)feedTableViewDidAppear:(id)a0;
- (void)saveRecommendCoreMob:(id)a0 creationId:(id)a1;
- (void)parsePlayTimeParamsWithEnterFrom:(id)a0 awemeModel:(id)a1;
- (BOOL)currentIsConsumptionPageWithEnterFrom:(id)a0;
- (BOOL)isSameConsumptionPageWithSourcePage:(id)a0 targetEnterFrom:(id)a1;
- (BOOL)parameterIsEqualWithTarget:(id)a0 source:(id)a1;
- (void)matchTrackWithEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

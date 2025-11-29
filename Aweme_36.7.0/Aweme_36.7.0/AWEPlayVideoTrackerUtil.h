@class NSString;

@interface AWEPlayVideoTrackerUtil : NSObject <AWEPlayVideoTrackerUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInLandscapeFeedStatus:(id)a0;
+ (id)isAwemeFromFamiliarCacheNumber:(id)a0;
+ (BOOL)isAwemeFromFamiliarCache:(id)a0;
+ (id)playerTypeString:(id)a0;
+ (void)addParamsForAdToDictionary:(id)a0 inPlayer:(id)a1;
+ (id)paramsForPOIInPlayer:(id)a0;
+ (void)trackRelationRecommend:(id)a0 inPlayer:(id)a1;
+ (id)changeParamsForCommentVideoController:(id)a0;
+ (id)changeParamsIfFromFollowingToOthersHomePagePlayWithSourceParams:(id)a0;
+ (id)changeNearbyUnderTakeParams:(id)a0;
+ (id)changeParamsForSearchVideoAbstract:(id)a0;
+ (id)changeParamsForSearchPlayVideoBtmInfo:(id)a0;
+ (id)changeCommerceValueFromSourceParams:(id)a0;
+ (id)changeEnterMethodIfFromCoCreatorPanel:(id)a0;
+ (id)changeParamsForMVChannelFromSourceParams:(id)a0 inPlayer:(id)a1;


@end

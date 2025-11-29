@interface AWETrackerAspectCollector : NSObject

+ (id)collectAspectsFromAIOriginal;
+ (void)aspectParams:(id)a0 context:(id)a1 event:(id)a2;
+ (id)collectAspectsFromSearchArticle;
+ (id)collectAspectsFromIMIncentiveChat;
+ (id)collectAspectsFromIMIncentiveShare;
+ (id)collectAspectsFromKnowledge;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)collectAspectsFromDetailCollection;
+ (id)collectAspectsFromDetailPropRanking;
+ (id)collectAspectsFromHotSpot;
+ (id)collectAspectsFromDouYinSelectBrand;
+ (id)collectAspectsFromMediumVideoPush;
+ (id)collectAspectsFromEcommerce;
+ (id)collectAspectsFromExperience;
+ (id)collectAspectsFromUndertake;
+ (id)collectAspectsFromFeedExtendedConsumption;
+ (id)collectAspectsFromBackgroundPlay;
+ (id)collectAspectsFromFeed;
+ (id)collectAspectsFromSearchMiddlePage;
+ (id)collectAspectsFromProfile;
+ (id)collectAspectsFromFeedUGC;
+ (id)collectAspectsFromSmallWindowPlay;
+ (id)collectAspectsFromListenFeed;
+ (id)collectAspectsFromPinch;
+ (id)collectAspectsFromAWEFriends;
+ (id)collectAspectsFromGameCP;
+ (id)collectAspectsFromHomepage;
+ (id)collectAspectsFromIMGroup;
+ (id)collectAspectsFromIM;
+ (id)collectAllAspects;
+ (id)collectAspectsFromSDKConsistency;
+ (id)collectAspectsFromChapter;
+ (id)collectAspectsFromMediumVideo;
+ (id)collectAspectsFromMusic;
+ (id)collectAspectsFromNearbyCard;
+ (id)collectAspectsFromNearbyHotSpot;
+ (id)collectAspectsFromNearby;
+ (id)collectAspectsFromNearbyClickComment;
+ (id)collectAspectsFromOfflineCenter;
+ (id)collectAspectsFromPlayInteraction;
+ (id)collectAspectsFromRelation;
+ (void)bindSearchParamsWith:(id)a0 originParams:(id)a1 event:(id)a2;
+ (void)trendingWordsShowParamsWith:(id)a0 originParams:(id)a1;
+ (void)trendingWordsClickParamsWith:(id)a0 originParams:(id)a1;
+ (BOOL)shouldGeneralRemoveListItemIdWithEvent:(id)a0 logExtraDict:(id)a1 searchParams:(id)a2;
+ (id)collectAspectsFromSearch;
+ (id)collectAspectsFromPlaylet;
+ (id)collectAspectsFromShowTracker;
+ (id)collectAspectsFromStudio;
+ (id)collectAspectsFromRecorderShot;
+ (void)setupBlockObj:(id)a0 withSymbol:(id)a1;
+ (void)strategyWhenAspectsCollisionInCollecting;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;

@end

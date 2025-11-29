@class AWEShowMonetizeRefreshContext, NSString, NSArray;
@protocol AWEShowMonetizeRefreshHandler, AWEShowMonetizeRefreshService;

@interface AWEShowMonetizeRefreshInfo : NSObject

@property (weak, nonatomic) id<AWEShowMonetizeRefreshService> refresh;
@property (retain, nonatomic) AWEShowMonetizeRefreshContext *context;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSString *contentID;
@property (nonatomic) unsigned long long videoType;
@property (weak, nonatomic) id<AWEShowMonetizeRefreshHandler> currentMonetizeSceneContainer;
@property (copy, nonatomic) NSArray *otherMonetizeSceneContainers;
@property (copy, nonatomic) NSArray *allMonetizeSceneContainers;
@property (copy, nonatomic) NSArray *allRefreshItems;
@property (copy, nonatomic) NSArray *allRefreshItemIDs;
@property (copy, nonatomic) NSString *currentItemID;
@property (copy, nonatomic) NSArray *veryHighPriorityItems;
@property (copy, nonatomic) NSArray *veryHighPriorityItemIDs;
@property (copy, nonatomic) NSArray *normalPriorityItems;
@property (copy, nonatomic) NSArray *normalPriorityItemIDs;
@property (nonatomic) double playProgress;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) long long targetEpisode;
@property (nonatomic) unsigned long long refreshType;

- (void).cxx_destruct;

@end

@class NSString, WCFacade, MyWCDB;

@interface WCTogetherManager : NSObject

@property (class, readonly, nonatomic) BOOL togetherPostEnabled;
@property (class, readonly, nonatomic) BOOL canShowTogetherHistoryEntrance;
@property (class, nonatomic) BOOL showsBadgeInPostPage;
@property (class, nonatomic) BOOL showsBadgeInHistoryEntrance;
@property (class, nonatomic) BOOL joinedTogether;

@property (copy, nonatomic) NSString *username;
@property (weak, nonatomic) WCFacade *referredFacade;
@property (retain, nonatomic) MyWCDB *database;

+ (void)_initializeForConfigurations;
+ (BOOL)canShowBadgeInPostPage;
+ (BOOL)showsTogetherHistoryEntranceForUsername:(id)a0;
+ (void)markHadShownTogetherHistoryEntranceForUsername:(id)a0;
+ (BOOL)hadShownTogetherHistoryEntranceForUsername:(id)a0;
+ (BOOL)_hadShownTogetherHistoryEntranceForUsername:(id)a0;
+ (void)_setHadShownTogetherHistoryEntrance:(BOOL)a0 forUsername:(id)a1;
+ (BOOL)_showsBadgeInPostPage;
+ (void)_setShowsBadgeInPostPage:(BOOL)a0;
+ (BOOL)_showsBadgeInHistoryEntrance;
+ (void)_setShowsBadgeInHistoryEntrance:(BOOL)a0;
+ (BOOL)_joinedTogether;
+ (void)_setJoinedTogether:(BOOL)a0;
+ (void)initialize;

- (id)initWithUsername:(id)a0;
- (id)getCachedDataItemsWithMaxCount:(unsigned long long)a0;
- (BOOL)updateCachedDataItems:(id)a0;
- (BOOL)deleteAllCachedDataItems;
- (void).cxx_destruct;

@end

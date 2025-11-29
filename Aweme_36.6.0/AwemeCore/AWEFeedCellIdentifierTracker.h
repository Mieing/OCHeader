@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEFeedCellIdentifierTracker : HTSService <AWEFeedCellIdentifierTracker> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _dataLock;
}

@property (retain, nonatomic) NSMutableDictionary *identifierTimestamps;
@property (retain, nonatomic) NSMutableArray *recentlyUsedIdentifiers;
@property (retain, nonatomic) NSMutableArray *recentlyItemIDs;
@property (nonatomic) double lastIdentifierTrackTime;
@property (nonatomic) BOOL dataLoaded;
@property (retain, nonatomic) NSMutableArray *stashInfos;
@property (retain, nonatomic) NSMutableDictionary *identifierCountInLast1000;
@property (retain, nonatomic) NSMutableDictionary *identifierCountInLast100;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pri_updateIdentifierCountInLastDict:(id)a0 newidentifier:(id)a1 removeidentifier:(id)a2;
- (void)pri_trackCellIdentifier:(id)a0 itemID:(id)a1 currentTime:(long long)a2;
- (unsigned long long)countForIdentifier:(id)a0 withTimeInterval:(double)a1;
- (id)countsForAllIdentifiersWithTimeInterval:(double)a0;
- (id)p_getRecentlyUsedIDs:(id /* block */)a0 withCount:(long long)a1;
- (void)cleanExpiredDataForIdentifier:(id)a0;
- (void)cleanAllExpiredData;
- (id)countsForAllIdentifiersWithItemCount:(long long)a0;
- (void)trackCellIdentifier:(id)a0 aweme:(id)a1;
- (unsigned long long)countForIdentifierInLast24Hours:(id)a0;
- (unsigned long long)countForIdentifierInLast7Days:(id)a0;
- (id)countsForAllIdentifiersInLast24Hours;
- (id)countsForAllIdentifiersInLast7Days;
- (id)countsForAllIdentifiersInLast100;
- (id)countsForAllIdentifiersInLast1000;
- (id)recentlyUsedIdentifiersWithCount:(long long)a0;
- (id)recentlyItemIDsWithCount:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)loadData;
- (void)saveData;

@end

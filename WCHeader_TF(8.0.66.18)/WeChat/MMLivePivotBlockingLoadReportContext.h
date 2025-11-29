@class NSMutableDictionary, NSMutableSet, FinderLiveReportBaseInfo, NSMutableArray, RelatedListBlockInfo;

@interface MMLivePivotBlockingLoadReportContext : NSObject

@property (retain, nonatomic) NSMutableSet *collapsingObjectIds;
@property (retain, nonatomic) NSMutableArray *blockedLoadingDurations;
@property (retain, nonatomic) NSMutableDictionary *itemAssociatedBlockedLoadingDurations;
@property (nonatomic) unsigned long long startLoadingUnixEpochTime;
@property (nonatomic) unsigned long long initializationUnixEpochTime;
@property (retain, nonatomic) NSMutableDictionary *exposedFeedItems;
@property (retain, nonatomic) NSMutableSet *playingFeedsSet;
@property (nonatomic) unsigned long long lastPlayUnixEpochTime;
@property (nonatomic) unsigned int cumulatedPlayDurationInMilliseconds;
@property (nonatomic) long long historyItemsCount;
@property (nonatomic) long long bottomMostExposedIndex;
@property (nonatomic) unsigned int newItemExposuresCount;
@property (retain, nonatomic) FinderLiveReportBaseInfo *initialReportBaseInfo;
@property (nonatomic) BOOL usingBackupFeeds;
@property (readonly, nonatomic) RelatedListBlockInfo *reportingBlockInfo;

- (id)init;
- (void)beginBlockedLoading;
- (void)completeBlockedLoadingWithFirstResultingObjectId:(unsigned long long)a0;
- (void)failBlockedLoading;
- (void)exposeLiveWithObjectId:(unsigned long long)a0;
- (void)beginPlayingLiveWithObjectId:(unsigned long long)a0;
- (void)leaveLiveWithObjectId:(unsigned long long)a0;
- (void).cxx_destruct;

@end

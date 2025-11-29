@class NSString, NSMutableDictionary, NSArray;

@interface WCTogetherHistoryReportSession : NSObject

@property (readonly, nonatomic) NSMutableDictionary *operationDictionary;
@property (nonatomic) double historyBrowsingBeginTime;
@property (nonatomic) double historyBrowsingAccumulatedTime;
@property (nonatomic) double previewBrowsingBeginTime;
@property (nonatomic) double previewBrowsingAccumulatedTime;
@property (nonatomic) double detailBrowsingBeginTime;
@property (nonatomic) double detailBrowsingAccumulatedTime;
@property (readonly, copy, nonatomic) NSString *username;
@property (nonatomic) unsigned int sourceScene;
@property (nonatomic) BOOL didShowBadge;
@property (readonly, copy, nonatomic) NSArray *displayedDataItems;
@property (readonly, copy, nonatomic) NSArray *displayedDataItemIDs;
@property (nonatomic) BOOL didClickFriendsInfo;

- (id)initWithUsername:(id)a0;
- (id)getOrCreateOperationWithDataItem:(id)a0;
- (void)historyWillAppear;
- (void)historyWillDisappear;
- (void)historyWillDisplayDataItem:(id)a0;
- (void)historyDidEndDisplayingDataItem:(id)a0;
- (void)previewWillAppearWithDataItem:(id)a0;
- (void)previewWillDisappearWithDataItem:(id)a0;
- (void)previewWillDisplayDataItem:(id)a0;
- (void)detailWillAppearWithDataItem:(id)a0;
- (void)detailWillDisappearWithDataItem:(id)a0;
- (void)detailWillDisplayDataItem:(id)a0;
- (void)didLikeDataItem:(id)a0;
- (void)didCommentDataItem:(id)a0;
- (void)didChangeTogetherWithDataItem:(id)a0;
- (void)endSessionAndReport;
- (id)generateLogString;
- (id)generateVisibleRangeString;
- (id)generateActionStringFromOperation:(id)a0;
- (id)fixedLogValue:(id)a0;
- (void).cxx_destruct;

@end

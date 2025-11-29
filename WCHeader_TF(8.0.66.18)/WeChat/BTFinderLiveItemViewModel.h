@class NSString, NSData, WCFinderDataItem, NSMutableArray;

@interface BTFinderLiveItemViewModel : BTFinderItemViewModel

@property (nonatomic) BOOL updateDataItemFinished;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSData *joinLiveBuffer;
@property (nonatomic) unsigned long long autoPlayStartTs;
@property (nonatomic) unsigned long long exposeStartTs;
@property (nonatomic) unsigned long long validRatioExposeStartTs;
@property (copy, nonatomic) id /* block */ liveEndAction;

+ (id)cellIdentifier;

- (id)initWithBTRecommendFinderData:(id)a0;
- (void)updateFinderDataItem;
- (void)getFinderDataItem:(id /* block */)a0;
- (id)finderExportId;
- (BOOL)canShowTagView;
- (BOOL)enableAutoPlay;
- (void)onClearDataForExitLiveWithLiveTask:(id)a0;
- (void)onLiveTaskUpdateStatus:(id)a0;
- (void).cxx_destruct;

@end

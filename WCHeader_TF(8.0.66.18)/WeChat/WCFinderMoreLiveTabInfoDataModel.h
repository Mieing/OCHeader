@class WCFinderBaseCgi, WCFinderLiveTabInfo, NSArray, NSData, WCFinderDataItem, NSMutableArray;

@interface WCFinderMoreLiveTabInfoDataModel : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) WCFinderLiveTabInfo *tabInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *sectionInfos;
@property (nonatomic) BOOL hasFetchData;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL isFetchingFollowDataFinish;
@property (nonatomic) BOOL isStartFetchingFollowData;
@property (retain, nonatomic) WCFinderBaseCgi *requestCgi;
@property (retain, nonatomic) NSMutableArray *followFoldTidArray;
@property (nonatomic) BOOL isFetchingFollowData;
@property (retain, nonatomic) WCFinderDataItem *fetchRelatedListItem;
@property (retain, nonatomic) WCFinderBaseCgi *fetchRelatedListCgi;
@property (retain, nonatomic) NSArray *fetchRelatedList;
@property (retain, nonatomic) NSMutableArray *fetchRelatedTidList;
@property (nonatomic) unsigned long long refreshInterval;
@property (nonatomic) BOOL hasEndLiveNeedRefresh;

- (id)initWithTabInfo:(id)a0 type:(unsigned long long)a1;
- (void)resetModelState;
- (void).cxx_destruct;

@end

@class NSData, NSString, WCFinderContact, NSMutableDictionary, SnsPoiDetail, FinderPoiStreamTabList, NSMutableArray, WCFinderPOIParamsModel, FinderPoiStreamNearbyInfo, FinderPoiStreamResponse_PoiPrepare;
@protocol WCFinderPOIRelatedStreamViewModelDelegate;

@interface WCFinderPOIRelatedStreamViewModel : NSObject

@property (retain, nonatomic) FinderPoiStreamTabList *tabList;
@property (retain, nonatomic) NSMutableArray *tabInfoArray;
@property (retain, nonatomic) NSMutableDictionary *dataArrayDict;
@property (nonatomic) BOOL isDataEmpty;
@property (nonatomic) BOOL stopFetchNextPage;
@property (nonatomic) BOOL hasFetchEnterData;
@property (nonatomic) unsigned long long preFetchNextPageIndex;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) SnsPoiDetail *poiDetail;
@property (retain, nonatomic) WCFinderContact *bindContact;
@property (copy, nonatomic) NSString *noticeWording;
@property (retain, nonatomic) WCFinderPOIParamsModel *poiParamsModel;
@property (nonatomic) long long friendLikeCount;
@property (nonatomic) unsigned long long defaultIndex;
@property (nonatomic) unsigned long long defaultFilterIndex;
@property (nonatomic) BOOL nearbyFlag;
@property (retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo;
@property (nonatomic) unsigned long long prefetchCount;
@property (weak, nonatomic) id<WCFinderPOIRelatedStreamViewModelDelegate> delegate;
@property (nonatomic) BOOL onlyShowPoiName;
@property (nonatomic) unsigned int totalFeedsCount;
@property (retain, nonatomic) FinderPoiStreamResponse_PoiPrepare *poiPrepare;
@property (nonatomic) int addressSubType;

- (id)initWithPOIParamsModel:(id)a0;
- (id)tabInfoAtIndex:(unsigned long long)a0;
- (id)dataArrayAtIndex:(unsigned long long)a0 filterIndex:(unsigned long long)a1;
- (id)enterReportID;
- (void)requestPoiTabList;
- (unsigned long long)indexOfTabId:(int)a0;
- (unsigned long long)filterIndexOfType:(unsigned int)a0;
- (id)getHeaderSnsPoiDetail;
- (BOOL)isSnSPoiDetailVaild;
- (id)poiName;
- (id)getPoiInfo;
- (id)getChatName;
- (id)getNoticeWording;
- (id)getCurBindContact;
- (id)shareItemWithDataItem:(id)a0;
- (id)poiDetailReport;
- (id)poiInfoFor21875;
- (id)finderUsernameReport;
- (id)poiIDReport;
- (id)copyPoiParamsIfNeededForTabIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end

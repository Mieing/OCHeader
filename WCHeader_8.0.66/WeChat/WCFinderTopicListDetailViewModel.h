@class FinderTopicBgmInfo, NSString, WCFinderTopicInfo, NSData, NSMutableArray, WCFinderSectionInfo;
@protocol WCFinderTopicListDetailViewModelDelegate;

@interface WCFinderTopicListDetailViewModel : NSObject <WCFinderDataItemExt, WCFinderPostDataItemExt>

@property (retain, nonatomic) NSString *latestQueryText;
@property (retain, nonatomic) NSString *latestRequestID;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL queryContinueFlag;
@property (retain, nonatomic) NSMutableArray *allSearchDataItems;
@property (nonatomic) int topicType;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *refObjectid;
@property (nonatomic) int tabType;
@property (nonatomic) int innerTabType;
@property (nonatomic) int fromType;
@property (retain, nonatomic) WCFinderTopicInfo *poiTopicRecommend;
@property (retain, nonatomic) WCFinderSectionInfo *sectionInfo;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) FinderTopicBgmInfo *bgmInfo;
@property (nonatomic) unsigned long long eventTopicId;
@property (nonatomic) BOOL isPinnedStateChanged;
@property (retain, nonatomic) NSData *byPassInfo;
@property (weak, nonatomic) id<WCFinderTopicListDetailViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (nonatomic) BOOL listForceShowRingtoneGuide;
@property (nonatomic) BOOL listJumpCarouselHighPriorty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithTopicType:(int)a0 lastBuffer:(id)a1 latestRequestID:(id)a2 queryText:(id)a3 queryContinueFlag:(BOOL)a4 dataSources:(id)a5 latitude:(id)a6 longitude:(id)a7 refObjectid:(id)a8 tabType:(int)a9 innerTabType:(int)a10 fromType:(int)a11 poiTopicRecommend:(id)a12 sectionInfo:(id)a13 bgmInfo:(id)a14 eventTopicId:(unsigned long long)a15 byPassInfo:(id)a16 listForceShowRingtoneGuide:(BOOL)a17 listJumpCarouselHighPriorty:(BOOL)a18;
+ (unsigned long long)getReportMusicTypeWithBgmInfo:(id)a0 topicType:(int)a1;

- (void)onFinderPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)onFinderDataItemDelete:(id)a0;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (id)searchDataItemAtIndexPath:(id)a0;
- (id)searchDataItemAtSection:(long long)a0;
- (id)contentVMWithTid:(id)a0;
- (void)removeEventFeedWithTid:(id)a0;
- (void)changeEventFeedPinToTopStateWithTid:(id)a0 pinned:(BOOL)a1;
- (void)onQueryNextPageDataItems;
- (id)latestQueryString;
- (BOOL)isNoMoreData;
- (void)resetSearchStatus;
- (long long)contentIndexOfTid:(id)a0;
- (long long)numberOfSection;
- (int)feedViewControllerScene;
- (void)onTopicFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end

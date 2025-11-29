@class NSData, NSString, JsApiSourceInfo, FinderTopicBgmInfo, WCFinderEventTabInfo, FinderEventInfo, NSMutableArray, WCFinderTopicInfo;
@protocol WCFinderEventPageViewModelDelegate;

@interface WCFinderEventPageViewModel : NSObject <WCFinderPostDataItemExt, WCFinderTopicDataKeyExt, WCFinderDataItemExt, WCFinderLiveExt>

@property (nonatomic) int commentScene;
@property (nonatomic) int topicType;
@property (nonatomic) int tabType;
@property (retain, nonatomic) WCFinderEventTabInfo *eventTabInfo;
@property (nonatomic) unsigned long long filterIndex;
@property (nonatomic) int fromType;
@property (copy, nonatomic) NSString *topicTitle;
@property (nonatomic) unsigned long long eventTopicId;
@property (copy, nonatomic) NSString *encryptedTopicId;
@property (copy, nonatomic) NSString *refObjectId;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;
@property (copy, nonatomic) NSString *latestRequestID;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (retain, nonatomic) FinderTopicBgmInfo *bgmInfo;
@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *contentVMArray;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSData *byPassInfo;
@property (weak, nonatomic) id<WCFinderEventPageViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTopicParams:(id)a0 eventTabInfo:(id)a1 filterIndex:(unsigned long long)a2 commentScene:(int)a3 byPassInfo:(id)a4;
- (void)dealloc;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (id)generateTopicListDetailViewModel;
- (id)eventIdStr;
- (unsigned long long)sortType;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)updateState;
- (void)removeFeedWithTid:(id)a0;
- (void)fakeInsertPostEventDataItem:(id)a0;
- (id)genContentVMForDataItem:(id)a0;
- (id)filterInfo;
- (void)onFinderPostSessionStartUpload:(id)a0;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)onFinderEventLiveUpdateWithTaskId:(id)a0 finderDataItem:(id)a1;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (void)finderFeedOfTopicBeDeleteWithTid:(id)a0;
- (void)finderTopicFeedOrderChanged:(unsigned long long)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end

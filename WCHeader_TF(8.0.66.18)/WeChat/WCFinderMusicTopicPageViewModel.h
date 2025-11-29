@class NSData, NSString, FinderTopicBgmInfo, FinderMusicTopicInfo, WCFinderEventTabInfo, FinderEventInfo, NSMutableArray, NSMutableSet, WCFinderMusicTopicDataProvider, WCFinderTopicInfo;
@protocol WCFinderMusicTopicPageViewModelDelegate;

@interface WCFinderMusicTopicPageViewModel : NSObject <WCFinderTopicDataKeyExt, WCFinderPostDataItemExt, WCFinderDataItemExt>

@property (nonatomic) int commentScene;
@property (nonatomic) int topicType;
@property (nonatomic) int tabType;
@property (retain, nonatomic) WCFinderEventTabInfo *eventTabInfo;
@property (nonatomic) int fromType;
@property (copy, nonatomic) NSString *topicTitle;
@property (nonatomic) unsigned long long musicTopicId;
@property (copy, nonatomic) NSString *encryptedTopicId;
@property (copy, nonatomic) NSString *refObjectId;
@property (copy, nonatomic) NSString *latestRequestID;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (retain, nonatomic) FinderTopicBgmInfo *bgmInfo;
@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *contentVMArray;
@property (retain, nonatomic) NSMutableSet *feedIdSet;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSData *byPassInfo;
@property (retain, nonatomic) FinderMusicTopicInfo *musicInfo;
@property (nonatomic) int getTopicInfoFlag;
@property (retain, nonatomic) WCFinderMusicTopicDataProvider *dataProvider;
@property (weak, nonatomic) id<WCFinderMusicTopicPageViewModelDelegate> delegate;
@property (nonatomic) BOOL shouldShowRingtoneEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTopicParams:(id)a0 eventTabInfo:(id)a1 commentScene:(int)a2 byPassInfo:(id)a3 musicInfo:(id)a4;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (id)generateTopicListDetailViewModel;
- (id)eventIdStr;
- (unsigned long long)sortType;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)updateState;
- (void)removeFeedWithTid:(id)a0;
- (void)onFinderPostSessionStartUpload:(id)a0;
- (void)fakeInsertPostEventDataItem:(id)a0;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (long long)itemIndexForTid:(id)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end

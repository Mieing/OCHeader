@class FinderTopicBgmInfo, NSString, WCFinderEventTabInfo, WCFinderTopicInfo, NSData, NSMutableArray;
@protocol WCFinderTopicPageViewModelDelegate;

@interface WCFinderTopicPageViewModel : NSObject

@property (nonatomic) int topicType;
@property (nonatomic) int tabType;
@property (retain, nonatomic) WCFinderEventTabInfo *tabInfo;
@property (nonatomic) unsigned long long filterIndex;
@property (nonatomic) int fromType;
@property (copy, nonatomic) NSString *topicTitle;
@property (copy, nonatomic) NSString *encryptedTopicId;
@property (copy, nonatomic) NSString *refObjectId;
@property (nonatomic) unsigned long long refreshTime;
@property (copy, nonatomic) NSString *latestRequestID;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (retain, nonatomic) FinderTopicBgmInfo *bgmInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *contentVMArray;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSData *byPassInfo;
@property (weak, nonatomic) id<WCFinderTopicPageViewModelDelegate> delegate;
@property (nonatomic) int commentScene;

- (id)initWithTopicParams:(id)a0 tabInfo:(id)a1 filterIndex:(unsigned long long)a2 commentScene:(int)a3;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (id)generateTopicListDetailViewModel;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)updateState;
- (id)filterInfo;
- (id)streamReportPageTag;
- (id)genTopicPageTagTitle;
- (unsigned long long)getReportMusicType;
- (void).cxx_destruct;

@end

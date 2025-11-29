@class WCFinderBaseCgi, NSString, WCFinderTopicInfo, NSData, NSMutableArray;
@protocol WCFinderGlobalFavFlowPageViewModelDelegate, WCFinderGlobalFavFeedTopicListDelegate;

@interface WCFinderGlobalFavFlowPageViewModel : NSObject <WCFinderDataItemExt>

@property (retain, nonatomic) NSData *lastBuf;
@property (nonatomic) unsigned long long finderTotalCount;
@property (nonatomic) unsigned long long megavideoTotalCount;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *contentVMArray;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) WCFinderBaseCgi *cgi;
@property (nonatomic) long long noMoreStyle;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (weak, nonatomic) id<WCFinderGlobalFavFlowPageViewModelDelegate> delegate;
@property (weak, nonatomic) id<WCFinderGlobalFavFeedTopicListDelegate> topicListDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageViewModelWithTopicInfo:(id)a0;

- (id)init;
- (id)initWithTopicInfo:(id)a0;
- (void)dealloc;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)contentVMFromTid:(id)a0;
- (long long)indexRowForContentVM:(id)a0;
- (BOOL)hasMoreData;
- (void)fetchServerDataWithLastBuffer:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)getLocalFirstPageData;
- (id)generateSearchlistViewModel;
- (BOOL)shouldInsertFeedToList:(id)a0;
- (void)deleteContentVM:(id)a0;
- (void).cxx_destruct;

@end

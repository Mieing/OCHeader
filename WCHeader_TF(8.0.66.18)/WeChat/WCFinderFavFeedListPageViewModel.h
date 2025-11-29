@class WCFinderBaseCgi, NSString, WCFinderTopicInfo, NSData, WCFinderMegaFavViewModel, NSMutableArray;
@protocol WCFinderFavFeedListPageViewModelDelegate, WCFinderFavFeedTopicListDelegate;

@interface WCFinderFavFeedListPageViewModel : NSObject <WCFinderDataItemExt>

@property (retain, nonatomic) NSData *lastBuf;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long finderTotalCount;
@property (nonatomic) unsigned long long megavideoTotalCount;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *contentVMArray;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) WCFinderBaseCgi *cgi;
@property (nonatomic) long long noMoreStyle;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;
@property (weak, nonatomic) id<WCFinderFavFeedListPageViewModelDelegate> delegate;
@property (weak, nonatomic) id<WCFinderFavFeedTopicListDelegate> topicListDelegate;
@property (retain, nonatomic) WCFinderMegaFavViewModel *megaVideoViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageViewModelWithTopicInfo:(id)a0;

- (id)init;
- (id)initWithTopicInfo:(id)a0;
- (void)dealloc;
- (unsigned long long)favTotalCount;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (BOOL)hasMoreData;
- (void)fetchServerDataWithLastBuffer:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)getLocalFirstPageData;
- (id)generateSearchlistViewModel;
- (void)onFinderDataItem:(id)a0 updateFavStateByExtention:(BOOL)a1;
- (BOOL)shouldInsertFeedToList:(id)a0;
- (void).cxx_destruct;

@end

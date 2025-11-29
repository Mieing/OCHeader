@class WCFinderBaseCgi, NSData, NSMutableArray, WCFinderFeedSearchParams;
@protocol WCFinderFeedSearchViewModelDelegate;

@interface WCFinderFeedSearchViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *topicTitleList;
@property (retain, nonatomic) NSMutableArray *searchItemModelList;
@property (retain, nonatomic) NSData *lastBuf;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) WCFinderBaseCgi *cgi;
@property (retain, nonatomic) WCFinderFeedSearchParams *searchParams;
@property (weak, nonatomic) id<WCFinderFeedSearchViewModelDelegate> delegate;

- (id)init;
- (void)loadLocalFavTopicData;
- (void)fetchSvrFavTopicData;
- (void)handleFavTopicData:(id)a0;
- (void)loadLocalFeedSearchData;
- (void)fetchSvrFeedSearchFirstPageData:(id)a0;
- (void)fetchSvrFeedSearchNextPageData;
- (void)fetchFavServerDataWithLastBuffer:(id)a0;
- (BOOL)hasMoreSearchData;
- (unsigned long long)searchItemModelCount;
- (id)searchItemModelAtIndex:(unsigned long long)a0;
- (void)clearFeedSearchData;
- (void)resetSearchCgi;
- (void)resetStateAndLastBuf;
- (void)reportSearchEventWithItemCount:(unsigned long long)a0;
- (void)reportExposeEventWithItemIndex:(unsigned long long)a0;
- (void)reportClickEventWithItemIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end

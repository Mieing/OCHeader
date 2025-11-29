@class NSData, NSMutableArray, WCFinderTopicInfo;
@protocol WCFinderFavListDetailViewModelDelegate;

@interface WCFinderFavListDetailViewModel : NSObject

@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL queryContinueFlag;
@property (retain, nonatomic) NSMutableArray *allSearchDataItems;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) BOOL stopFetchData;
@property (weak, nonatomic) id<WCFinderFavListDetailViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderTopicInfo *topicInfo;

+ (id)initWithLastBuffer:(id)a0 topicInfo:(id)a1 queryContinueFlag:(BOOL)a2 dataSources:(id)a3 commentScene:(int)a4;

- (id)searchDataItemAtIndexPath:(id)a0;
- (id)searchDataItemAtSection:(long long)a0;
- (id)contentVMWithTid:(id)a0;
- (void)onQueryNextPageDataItems;
- (BOOL)isNoMoreData;
- (long long)contentIndexOfTid:(id)a0;
- (long long)numberOfSection;
- (void)delContentVM:(id)a0;
- (int)feedViewControllerScene;
- (void).cxx_destruct;

@end

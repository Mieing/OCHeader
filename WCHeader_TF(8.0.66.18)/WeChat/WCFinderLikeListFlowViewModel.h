@class NSString, NSData, NSMutableArray, WCFinderMegalikeViewModel;
@protocol WCFinderLikeListFlowViewModelDelegate;

@interface WCFinderLikeListFlowViewModel : NSObject <WCFinderDataItemExt>

@property (retain, nonatomic) NSData *lastBuf;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long finderTotalCount;
@property (nonatomic) unsigned long long megavideoTotalCount;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableArray *contentVMArray;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<WCFinderLikeListFlowViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderMegalikeViewModel *megaVideoViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)likeTotalCount;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (BOOL)hasMoreData;
- (void)fetchServerDataWithLastBuffer:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)getLocalFirstPageData;
- (id)generateLikeListViewModel;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)a0;
- (void).cxx_destruct;

@end

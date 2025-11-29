@class WCFinderStreamLoadingState, WCFinderFeedArray, WCFinderProfilePostTipsInfo;
@protocol WCFinderStreamProfilePostTipsFeedFlowViewModelDelegate;

@interface WCFinderStreamProfilePostTipsFeedFlowViewModel : NSObject

@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderProfilePostTipsInfo *postTipsInfo;
@property (weak, nonatomic) id<WCFinderStreamProfilePostTipsFeedFlowViewModelDelegate> delegate;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;

- (id)initWithPostTipsInfo:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (BOOL)isLoading;
- (BOOL)hasMore;
- (void)_fetchDataWithIsFirstPage:(BOOL)a0;
- (int)commentScene;
- (void).cxx_destruct;

@end

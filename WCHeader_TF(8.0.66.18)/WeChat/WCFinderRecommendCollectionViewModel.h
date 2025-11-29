@class WCFinderStreamLoadingState, WCFinderFeedArray, RecommendReasonWording, FinderGetRecommendReasonParams;
@protocol WCFinderRecommendCollectionViewModelDelegate;

@interface WCFinderRecommendCollectionViewModel : NSObject

@property (retain, nonatomic) FinderGetRecommendReasonParams *recommendParams;
@property (retain, nonatomic) RecommendReasonWording *headInfo;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (weak, nonatomic) id<WCFinderRecommendCollectionViewModelDelegate> delegate;

- (id)initWithParams:(id)a0 commentScene:(int)a1;
- (void)requestHeadInfo;
- (void)requestFirstPageData:(int)a0;
- (void)requestNextPageData:(int)a0;
- (void)requestDataWithPullType:(int)a0 commentScene:(int)a1;
- (int)commentScene;
- (void).cxx_destruct;

@end

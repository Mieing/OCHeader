@class FeedsPreviewLiveMultiStyleInfo_IndependentStyleInfo_StyleTwenty, NSMutableArray, MMFinderLiveFeedStreamCarouselSingleCtrl;
@protocol MMFinderLiveFeedStreamCommentLogicDelegate;

@interface MMFinderLiveFeedStreamCommentLogic : NSObject

@property (retain, nonatomic) NSMutableArray *datas;
@property (weak, nonatomic) id<MMFinderLiveFeedStreamCommentLogicDelegate> delegate;
@property (nonatomic) BOOL banComment;
@property (retain, nonatomic) MMFinderLiveFeedStreamCarouselSingleCtrl *carouselCtrl;
@property (retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_IndependentStyleInfo_StyleTwenty *commentConfig;
@property (readonly, nonatomic) BOOL filterLastShown;
@property (readonly, nonatomic) unsigned long long commentWordsLimit;

- (id)init;
- (void)prepareForReuse;
- (void)receiveDataArray:(id)a0;
- (id)popFirstCarouselItem;
- (unsigned long long)dataCount;
- (void).cxx_destruct;

@end

@protocol AWESearchAIGCCommonDetailRequestParamsDelegate;

@interface AWESearchAIGCCommonDetailRequestParams : AWESearchVerticalRequestParams

@property (weak, nonatomic) id<AWESearchAIGCCommonDetailRequestParamsDelegate> delegate;

- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (void).cxx_destruct;

@end

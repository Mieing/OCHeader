@protocol AWESearchAIGCRequestParamsDelegate;

@interface AWESearchAIGCRequestParams : AWESearchVerticalRequestParams

@property (weak, nonatomic) id<AWESearchAIGCRequestParamsDelegate> delegate;

- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (void).cxx_destruct;

@end

@protocol AWESearchPersonCachalotRequestParamsDelegate;

@interface AWESearchPersonCachalotRequestParams : AWESearchVerticalRequestParams

@property (weak, nonatomic) id<AWESearchPersonCachalotRequestParamsDelegate> delegate;

- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (void).cxx_destruct;

@end

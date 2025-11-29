@class NSString;
@protocol AWESearchGeneralCachalotRequestParamsDelegate;

@interface AWEGeneralCachalotRequestParams : AWESearchVerticalRequestParams

@property (nonatomic) unsigned long long refreshType;
@property (weak, nonatomic) id<AWESearchGeneralCachalotRequestParamsDelegate> delegate;
@property (copy, nonatomic) NSString *sendBackList;

- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (BOOL)enablePreserveExtraParam;
- (void).cxx_destruct;

@end

@class NSString;

@interface AWESearchUGCTopicDiscussRequestParams : AWEGeneralCachalotRequestParams

@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSString *backtrace;

- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (id)raw_generateParams;
- (id)raw_loadMoreParams;
- (id)raw_refreshParams;
- (id)raw_searchPublicParams;
- (id)raw_paramsWithCustomParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)requestPath;

@end

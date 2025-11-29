@class NSString, NSDictionary;

@interface AWESearchResultCachalotRequestParams : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *flowRequestUrl;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL fromHotSearch;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) NSString *previousSearchID;
@property (copy, nonatomic) NSString *previousTab;
@property (nonatomic) BOOL hideCorrection;
@property (copy, nonatomic) NSDictionary *clientEngineExtra;
@property (copy, nonatomic) NSDictionary *clientServerPassForOnce;
@property (copy, nonatomic) NSString *clientServerParams;
@property (copy, nonatomic) NSString *requestPath;
@property (copy, nonatomic) NSString *flowRequestPath;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSDictionary *nextPage;
@property (copy, nonatomic) NSString *searchScene;
@property (nonatomic) BOOL isAfterLocate;
@property (nonatomic) BOOL isPullRefresh;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *injectParams;
@property (copy, nonatomic) NSString *searchType;

- (id)searchPublicParams;
- (id)refreshParams;
- (id)loadMoreParams;
- (id)generateParams;
- (id)paramsWithCustomParams:(id)a0;
- (void)clearParamsBeforeRefresh;
- (void).cxx_destruct;
- (id)init;

@end

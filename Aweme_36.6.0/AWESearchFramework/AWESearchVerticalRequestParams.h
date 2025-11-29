@class NSString, NSDictionary;

@interface AWESearchVerticalRequestParams : AWESearchResultCachalotRequestParams

@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSDictionary *filterParams;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) BOOL isNativeFilter;
@property (copy, nonatomic) NSDictionary *searchExtraParams;
@property (copy, nonatomic) NSString *pagingFeatureInfo;
@property (nonatomic) long long columnNum;
@property (copy, nonatomic) NSString *containerPageName;

- (id)refreshParams;
- (id)generateParams;
- (void).cxx_destruct;

@end

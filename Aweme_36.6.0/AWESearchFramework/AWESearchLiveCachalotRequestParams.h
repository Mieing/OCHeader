@class NSString, AWESearchSmartPagingAdapter;

@interface AWESearchLiveCachalotRequestParams : AWESearchResultCachalotRequestParams

@property (retain, nonatomic) AWESearchSmartPagingAdapter *smartPagingAdpater;
@property (copy, nonatomic) NSString *pagingFeatureInfo;
@property (copy, nonatomic) id /* block */ enterFromForParamsBlock;
@property (copy, nonatomic) id /* block */ fromGroupIDParamsBlock;
@property (copy, nonatomic) id /* block */ searchExtraParamsBlock;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (long long)syncGetSearchLiveVerticalUIOpt;
+ (long long)syncGetSearchLiveVerticalStyleOpt;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)refreshParams;
- (id)generateParams;
- (void).cxx_destruct;

@end

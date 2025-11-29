@class NSString, NSDictionary;

@interface AWESearchLifeServiceLiveRequestParams : AWESearchLiveCachalotRequestParams <AWESearchLifeServiceBaseRequestParamsProtocol>

@property (nonatomic) BOOL hasSearched;
@property (copy, nonatomic) NSString *strSaleChannel;
@property (copy, nonatomic) NSString *strLifeTheme;
@property (copy, nonatomic) NSDictionary *commonOnceParams;
@property (copy, nonatomic) NSDictionary *commonPassWithFilterParams;
@property (copy, nonatomic) NSDictionary *commonAllTimeParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateParams;
- (void).cxx_destruct;

@end

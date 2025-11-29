@class NSString, NSDictionary;

@interface AWESearchLifeServiceRequestParamsBaseContext : AWESearchVerticalRequestParamsBaseContext

@property (nonatomic) BOOL isLifeService;
@property (copy, nonatomic) NSString *strSearchChannel;
@property (copy, nonatomic) NSDictionary *dictSortParamsInfo;
@property (nonatomic) BOOL shouldForceDisablePredict;
@property (copy, nonatomic) NSString *strTargetPOIID;
@property (nonatomic) BOOL reserveDeliveryFilter;
@property (copy, nonatomic) NSString *strCityCode;

- (void)updateWithRouterModel:(id)a0;
- (void)updateWithExtraLogParams:(id)a0;
- (BOOL)isForceInGrouponTab;
- (BOOL)isFromSearchCard;
- (BOOL)p_isFromLifeService;
- (BOOL)p_isFromLifeMall;
- (void).cxx_destruct;

@end

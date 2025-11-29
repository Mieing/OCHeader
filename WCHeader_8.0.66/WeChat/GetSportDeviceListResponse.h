@class NSString, NSMutableArray, BaseResponse;

@interface GetSportDeviceListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *deviceList;
@property (retain, nonatomic) NSString *dataSourceFaqUrl;
@property (retain, nonatomic) NSString *watchDataSourceFaqUrl;

+ (void)initialize;

@end

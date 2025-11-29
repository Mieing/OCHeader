@class NSString;

@interface WCAdGetCouponResultModel : WCAdChannelReportExtendInfoModel

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *stockId;
@property (nonatomic) long long result;
@property (retain, nonatomic) NSString *msg;
@property (nonatomic) int source;
@property (nonatomic) int actionType;

- (void).cxx_destruct;

@end

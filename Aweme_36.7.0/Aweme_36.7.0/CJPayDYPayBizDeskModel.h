@class NSString, NSDictionary, JSONModel;

@interface CJPayDYPayBizDeskModel : NSObject

@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) BOOL isPaymentOuterApp;
@property (nonatomic) BOOL isUseMask;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) JSONModel *response;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL isSignAndPay;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSDictionary *outerPayTrackDict;

- (void).cxx_destruct;

@end

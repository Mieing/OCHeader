@class NSString, NSMutableArray, BaseResponse;

@interface GetHbRefundConfigResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *entranceName;
@property (retain, nonatomic) NSString *entranceTitle;
@property (nonatomic) BOOL reddot;
@property (retain, nonatomic) NSString *refundLingqianTitle;
@property (retain, nonatomic) NSString *refundLingqianDesc;
@property (retain, nonatomic) NSString *refundOriginTitle;
@property (retain, nonatomic) NSString *refundOriginDesc;
@property (retain, nonatomic) NSString *topTip;
@property (retain, nonatomic) NSString *refundTimeTitle;
@property (retain, nonatomic) NSMutableArray *refundTime;

+ (void)initialize;

@end

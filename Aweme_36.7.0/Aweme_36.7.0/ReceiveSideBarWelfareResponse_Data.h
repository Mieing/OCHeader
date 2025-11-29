@class NSString, ReceiveSideBarWelfareResponse_CouponInfo, ReceiveSideBarWelfareResponse_WelfareInfo;

@interface ReceiveSideBarWelfareResponse_Data : IESLivePBBaseMessage

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *welfareId;
@property (nonatomic) int type;
@property (retain, nonatomic) ReceiveSideBarWelfareResponse_CouponInfo *couponInfo;
@property (nonatomic) BOOL hasCouponInfo;
@property (retain, nonatomic) ReceiveSideBarWelfareResponse_WelfareInfo *welfareInfo;
@property (nonatomic) BOOL hasWelfareInfo;
@property (nonatomic) int receiveResult;
@property (nonatomic) int subscribeStatus;

+ (id)descriptor;

@end

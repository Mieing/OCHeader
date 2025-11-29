@class NSString;

@interface IESLiveWalletRefundDetailInfo : IESLivePBBaseMessage

@property (nonatomic) int applyOrderStatus;
@property (copy, nonatomic) NSString *applyOrderStatusTitle;
@property (copy, nonatomic) NSString *displayMessage;
@property (copy, nonatomic) NSString *refundDetailURL;

+ (id)descriptor;

@end

@class NSString, NSMutableArray;

@interface QueryOrderResult_ChargeOrderExtra : IESLivePBBaseMessage

@property (nonatomic) long long ployId;
@property (copy, nonatomic) NSString *coupon;
@property (copy, nonatomic) NSString *couponDescription;
@property (retain, nonatomic) NSMutableArray *couponDetailArray;
@property (readonly, nonatomic) unsigned long long couponDetailArray_Count;
@property (nonatomic) long long rebateAmount;
@property (copy, nonatomic) NSString *rebateMessage;
@property (nonatomic) long long deductAmount;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *cashdeskURL;
@property (copy, nonatomic) NSString *successToast;

+ (id)descriptor;

@end

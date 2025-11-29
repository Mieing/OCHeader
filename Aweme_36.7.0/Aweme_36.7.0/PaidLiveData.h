@class PaidLiveBizExtra, PaidLiveItemInfo;

@interface PaidLiveData : IESLivePBBaseMessage

@property (nonatomic) long long retType;
@property (nonatomic) long long duration;
@property (nonatomic) int delivery;
@property (retain, nonatomic) PaidLiveBizExtra *bizExtra;
@property (nonatomic) BOOL hasBizExtra;
@property (nonatomic) long long refreshTime;
@property (nonatomic) int paidLiveType;
@property (retain, nonatomic) PaidLiveItemInfo *itemInfo;
@property (nonatomic) BOOL hasItemInfo;
@property (nonatomic) long long asyncAuthenticationOperate;
@property (nonatomic) int rightType;

+ (id)descriptor;

@end

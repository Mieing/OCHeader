@class NSString, HTSLiveText;

@interface HTSLiveLinkmicProfitNormalPaidLinkmicAddPriceContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *addPriceUserId;
@property (nonatomic) long long addPriceValue;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;

+ (id)descriptor;

@end

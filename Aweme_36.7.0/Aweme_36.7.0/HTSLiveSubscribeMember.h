@class NSString, HTSLiveProductPriceStruct;

@interface HTSLiveSubscribeMember : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *paySchema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) HTSLiveProductPriceStruct *priceInfo;
@property (nonatomic) BOOL hasPriceInfo;
@property (nonatomic) int subscribeStatus;
@property (nonatomic) long long validStartTime;
@property (nonatomic) long long validEndTime;

+ (id)descriptor;

@end

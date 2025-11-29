@class HTSLiveCommon;

@interface HTSLiveCommerceSaleMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL hasCommerceSale;

+ (id)descriptor;

@end

@class HTSLiveCommon, HTSLiveSandwichBorder;

@interface HTSLiveSandwichBorderMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveSandwichBorder *sandwichBorderInfo;
@property (nonatomic) BOOL hasSandwichBorderInfo;

+ (id)descriptor;

@end

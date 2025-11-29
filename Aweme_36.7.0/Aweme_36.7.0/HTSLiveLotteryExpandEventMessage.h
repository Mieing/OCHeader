@class NSString, HTSLiveCommon;

@interface HTSLiveLotteryExpandEventMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long expandPrizeType;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end

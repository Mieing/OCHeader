@class HTSLiveOrderSingMVInfo;

@interface HTSLiveOrderSingSyncData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveOrderSingMVInfo *mvInfo;
@property (nonatomic) BOOL hasMvInfo;

+ (id)descriptor;

@end

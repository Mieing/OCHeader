@class NSString;

@interface StealDragonInfo_SettleInfo : IESLivePBBaseMessage

@property (nonatomic) long long dragonLevel;
@property (copy, nonatomic) NSString *curTopAnchorId;

+ (id)descriptor;

@end

@class NSString;

@interface StealDragonInfo_StealInfo : IESLivePBBaseMessage

@property (nonatomic) long long dragonLevel;
@property (copy, nonatomic) NSString *curTopAnchorId;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *curTopAnchorOpenId;

+ (id)descriptor;

@end

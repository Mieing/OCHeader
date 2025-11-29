@class NSString;

@interface Equip : IESLivePBBaseMessage

@property (nonatomic) int configId;
@property (nonatomic) int amount;
@property (copy, nonatomic) NSString *icon;

+ (id)descriptor;

@end

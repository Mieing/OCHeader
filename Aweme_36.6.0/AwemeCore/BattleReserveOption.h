@class NSString;

@interface BattleReserveOption : IESLivePBBaseMessage

@property (nonatomic) long long reserveOptionId;
@property (copy, nonatomic) NSString *text;

+ (id)descriptor;

@end

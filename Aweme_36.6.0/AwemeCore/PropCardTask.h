@class NSString;

@interface PropCardTask : IESLivePBBaseMessage

@property (nonatomic) long long currentValue;
@property (nonatomic) long long totalValue;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *currentValueStr;
@property (copy, nonatomic) NSString *totalValueStr;
@property (nonatomic) long long effectNum;

+ (id)descriptor;

@end

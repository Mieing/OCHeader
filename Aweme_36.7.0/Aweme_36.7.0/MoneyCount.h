@class NSString;

@interface MoneyCount : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *playerInfo;
@property (copy, nonatomic) NSString *compInfo;

+ (id)descriptor;

@end

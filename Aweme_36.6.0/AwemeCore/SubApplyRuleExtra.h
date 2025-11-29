@class NSString, NSMutableDictionary;

@interface SubApplyRuleExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *desc;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableDictionary *descExtra;
@property (readonly, nonatomic) unsigned long long descExtra_Count;

+ (id)descriptor;

@end

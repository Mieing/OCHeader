@class NSString, NSMutableDictionary;

@interface HTSLiveAIPublicScreenContainer_Ability : IESLivePBBaseMessage

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) unsigned long long params_Count;

+ (id)descriptor;

@end

@class NSString, NSMutableDictionary;

@interface HTSLiveAICloneConvItem : IESLivePBBaseMessage

@property (nonatomic) long long convComponent;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) NSMutableDictionary *tag;
@property (readonly, nonatomic) unsigned long long tag_Count;

+ (id)descriptor;

@end

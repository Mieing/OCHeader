@class NSString, NSMutableDictionary;

@interface HTSLiveCommonBubble : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) int appearMode;
@property (nonatomic) int disappearMode;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end

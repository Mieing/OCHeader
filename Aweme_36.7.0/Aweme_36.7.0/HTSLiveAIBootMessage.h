@class NSString, HTSLiveCommon, NSMutableDictionary;

@interface HTSLiveAIBootMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSMutableDictionary *tag;
@property (readonly, nonatomic) unsigned long long tag_Count;

+ (id)descriptor;

@end

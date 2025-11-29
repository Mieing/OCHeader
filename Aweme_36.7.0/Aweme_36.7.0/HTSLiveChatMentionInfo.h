@class NSMutableArray;

@interface HTSLiveChatMentionInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *mentionUserIdsArray;
@property (readonly, nonatomic) unsigned long long mentionUserIdsArray_Count;
@property (retain, nonatomic) NSMutableArray *mentionWebcastUserIdsArray;
@property (readonly, nonatomic) unsigned long long mentionWebcastUserIdsArray_Count;
@property (nonatomic) long long showTime;

+ (id)descriptor;

@end

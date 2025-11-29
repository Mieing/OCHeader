@class NSString, NSMutableArray;

@interface HTSLiveFastChatInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL fastChatSwitch;
@property (copy, nonatomic) NSString *bubbleColor;
@property (retain, nonatomic) NSMutableArray *fastChatListArray;
@property (readonly, nonatomic) unsigned long long fastChatListArray_Count;

+ (id)descriptor;

@end

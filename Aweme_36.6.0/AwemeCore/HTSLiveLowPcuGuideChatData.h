@class NSMutableArray;

@interface HTSLiveLowPcuGuideChatData : IESLivePBBaseMessage

@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableArray *guideChatConfigArray;
@property (readonly, nonatomic) unsigned long long guideChatConfigArray_Count;

+ (id)descriptor;

@end

@class NSMutableArray;

@interface TIMXPBNGetCmdMessageChainV2RespBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) long long nextCmdMessageChainV2Index;
@property (nonatomic) BOOL hasNextCmdMessageChainV2Index;

+ (id)descriptor;

- (BOOL)hasMore;
- (long long)nextCmdMessageChainV2Index;
- (id)messagesArray;

@end

@class NSMutableArray;

@interface TIMXPBNGetCmdMessageRangeResponseBody : GPBMessage

@property (nonatomic) long long cmdIndexV2;
@property (nonatomic) BOOL hasCmdIndexV2;
@property (nonatomic) long long size;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasDirection;
@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) long long nextCmdIndexV2;
@property (nonatomic) BOOL hasNextCmdIndexV2;
@property (nonatomic) long long cmdMessageChainV2Index;
@property (nonatomic) BOOL hasCmdMessageChainV2Index;
@property (nonatomic) long long nextCmdMessageChainV2Index;
@property (nonatomic) BOOL hasNextCmdMessageChainV2Index;

+ (id)descriptor;

@end

@interface TIMXPBNGetCmdMessageRangeRequestBody : GPBMessage

@property (nonatomic) long long cmdIndexV2;
@property (nonatomic) BOOL hasCmdIndexV2;
@property (nonatomic) long long size;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) long long cmdMessageChainV2Index;
@property (nonatomic) BOOL hasCmdMessageChainV2Index;

+ (id)descriptor;

@end

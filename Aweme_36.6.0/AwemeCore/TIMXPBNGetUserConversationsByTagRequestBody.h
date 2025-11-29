@interface TIMXPBNGetUserConversationsByTagRequestBody : GPBMessage

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) int convLimit;
@property (nonatomic) BOOL hasConvLimit;
@property (nonatomic) BOOL reverse;
@property (nonatomic) BOOL hasReverse;
@property (nonatomic) int tag;
@property (nonatomic) BOOL hasTag;

+ (id)descriptor;

@end

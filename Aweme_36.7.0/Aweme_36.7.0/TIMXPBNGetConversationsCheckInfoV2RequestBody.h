@interface TIMXPBNGetConversationsCheckInfoV2RequestBody : GPBMessage

@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int page;
@property (nonatomic) BOOL hasPage;
@property (nonatomic) long long strangerVersion;
@property (nonatomic) BOOL hasStrangerVersion;
@property (nonatomic) int strangerPage;
@property (nonatomic) BOOL hasStrangerPage;
@property (nonatomic) int needCheckConversationList;
@property (nonatomic) BOOL hasNeedCheckConversationList;

+ (id)descriptor;

@end

@class TIMXPBNDeletedConversationBasicInfo;

@interface TIMXPBNLoadDeletedConversationResponseInfo : GPBMessage

@property (retain, nonatomic) TIMXPBNDeletedConversationBasicInfo *basicInfo;
@property (nonatomic) BOOL hasBasicInfo;
@property (nonatomic) long long messageCount;
@property (nonatomic) BOOL hasMessageCount;
@property (nonatomic) long long remainingDays;
@property (nonatomic) BOOL hasRemainingDays;

+ (id)descriptor;

@end

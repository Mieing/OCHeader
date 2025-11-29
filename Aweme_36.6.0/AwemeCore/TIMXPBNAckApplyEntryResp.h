@class TIMXPBNConversationApplyInfo, NSString;

@interface TIMXPBNAckApplyEntryResp : GPBMessage

@property (nonatomic) long long applyId;
@property (nonatomic) BOOL hasApplyId;
@property (retain, nonatomic) TIMXPBNConversationApplyInfo *applyInfo;
@property (nonatomic) BOOL hasApplyInfo;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;

+ (id)descriptor;

@end

@class NSString;

@interface TIMXPBNBlockConversationRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int blockStatus;
@property (nonatomic) BOOL hasBlockStatus;
@property (nonatomic) BOOL blockNormalOnly;
@property (nonatomic) BOOL hasBlockNormalOnly;
@property (nonatomic) int speakPermissionMode;
@property (nonatomic) BOOL hasSpeakPermissionMode;

+ (id)descriptor;

@end

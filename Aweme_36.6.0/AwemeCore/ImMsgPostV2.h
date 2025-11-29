@class NSString;

@interface ImMsgPostV2 : GPBMessage

@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (copy, nonatomic) NSString *conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int uiInfo;
@property (nonatomic) BOOL hasUiInfo;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;

+ (id)descriptor;

@end

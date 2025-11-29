@class NSString, NSMutableDictionary;

@interface TIMXPBNDissolveConversationRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (copy, nonatomic) NSString *dissolveHistoryInvisible;
@property (nonatomic) BOOL hasDissolveHistoryInvisible;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end

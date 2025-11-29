@class TIMXPBNConversationMemberList;

@interface TIMXPBNGetConversationMemberListResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNConversationMemberList *memberList;
@property (nonatomic) BOOL hasMemberList;

+ (id)descriptor;

@end

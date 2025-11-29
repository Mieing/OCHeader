@class TIMXPBNParticipantsPage;

@interface TIMXPBNConversationParticipantsListResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNParticipantsPage *participantsPage;
@property (nonatomic) BOOL hasParticipantsPage;

+ (id)descriptor;

@end

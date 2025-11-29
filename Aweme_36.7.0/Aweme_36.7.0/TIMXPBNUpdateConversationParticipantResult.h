@class TIMXPBNParticipant, NSString, NSMutableDictionary;

@interface TIMXPBNUpdateConversationParticipantResult : GPBMessage

@property (retain, nonatomic) TIMXPBNParticipant *participant;
@property (nonatomic) BOOL hasParticipant;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (nonatomic) long long uid;
@property (nonatomic) BOOL hasUid;
@property (nonatomic) int code;
@property (nonatomic) BOOL hasCode;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end

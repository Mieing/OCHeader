@class NSString, NSMutableDictionary, GPBInt64Array, NSMutableArray;

@interface TIMXPBNConversationRemoveParticipantsResponseBody : GPBMessage

@property (retain, nonatomic) GPBInt64Array *failedParticipantsArray;
@property (readonly, nonatomic) unsigned long long failedParticipantsArray_Count;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (retain, nonatomic) NSMutableArray *failedSecParticipantsArray;
@property (readonly, nonatomic) unsigned long long failedSecParticipantsArray_Count;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end

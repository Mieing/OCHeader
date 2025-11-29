@class NSString, NSMutableDictionary, GPBInt64Array, NSMutableArray;

@interface TIMXPBNBatchUpdateConversationParticipantResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *successParticipantsArray;
@property (readonly, nonatomic) unsigned long long successParticipantsArray_Count;
@property (retain, nonatomic) NSMutableArray *callbackFailedParticipantsArray;
@property (readonly, nonatomic) unsigned long long callbackFailedParticipantsArray_Count;
@property (retain, nonatomic) GPBInt64Array *failedParticipantsArray;
@property (readonly, nonatomic) unsigned long long failedParticipantsArray_Count;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (retain, nonatomic) NSMutableArray *failedInfosArray;
@property (readonly, nonatomic) unsigned long long failedInfosArray_Count;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end

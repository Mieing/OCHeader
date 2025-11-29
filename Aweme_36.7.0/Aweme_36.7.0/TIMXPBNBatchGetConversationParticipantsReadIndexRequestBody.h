@class GPBInt64Array, NSMutableArray, NSString;

@interface TIMXPBNBatchGetConversationParticipantsReadIndexRequestBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationIdArray;
@property (readonly, nonatomic) unsigned long long conversationIdArray_Count;
@property (retain, nonatomic) GPBInt64Array *conversationShortIdArray;
@property (readonly, nonatomic) unsigned long long conversationShortIdArray_Count;
@property (copy, nonatomic) NSString *requestFrom;
@property (nonatomic) BOOL hasRequestFrom;
@property (nonatomic) BOOL minIndexRequired;
@property (nonatomic) BOOL hasMinIndexRequired;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (retain, nonatomic) NSMutableArray *paramsArray;
@property (readonly, nonatomic) unsigned long long paramsArray_Count;

+ (id)descriptor;

- (void)setRequestFrom:(id)a0;
- (void)setConversationShortIdArray:(id)a0;
- (void)setConversationIdArray:(id)a0;

@end

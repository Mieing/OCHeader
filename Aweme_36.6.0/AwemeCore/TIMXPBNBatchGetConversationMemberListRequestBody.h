@class NSMutableArray;

@interface TIMXPBNBatchGetConversationMemberListRequestBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *batchMemberListArray;
@property (readonly, nonatomic) unsigned long long batchMemberListArray_Count;

+ (id)descriptor;

@end

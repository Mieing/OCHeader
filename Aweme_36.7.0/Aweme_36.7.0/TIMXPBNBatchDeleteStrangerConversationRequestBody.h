@class NSMutableArray;

@interface TIMXPBNBatchDeleteStrangerConversationRequestBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *markDeleteRequestsArray;
@property (readonly, nonatomic) unsigned long long markDeleteRequestsArray_Count;

+ (id)descriptor;

@end

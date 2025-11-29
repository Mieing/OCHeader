@class NSMutableArray;

@interface TIMXPBNBatchDeleteConversationRequestBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *markDeleteRequestsArray;
@property (readonly, nonatomic) unsigned long long markDeleteRequestsArray_Count;

+ (id)descriptor;

@end

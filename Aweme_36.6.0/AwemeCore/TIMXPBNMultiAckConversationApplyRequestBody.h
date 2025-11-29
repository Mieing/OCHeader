@class NSMutableArray;

@interface TIMXPBNMultiAckConversationApplyRequestBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *applyListArray;
@property (readonly, nonatomic) unsigned long long applyListArray_Count;

+ (id)descriptor;

@end

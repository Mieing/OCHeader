@class GPBInt64Array, NSMutableDictionary;

@interface TIMXPBNBatchGetConversationAuditUnreadRequestBody : GPBMessage

@property (retain, nonatomic) GPBInt64Array *convShortIdArray;
@property (readonly, nonatomic) unsigned long long convShortIdArray_Count;
@property (retain, nonatomic) NSMutableDictionary *bizExt;
@property (readonly, nonatomic) unsigned long long bizExt_Count;
@property (nonatomic) BOOL needLastApplyInfo;
@property (nonatomic) BOOL hasNeedLastApplyInfo;

+ (id)descriptor;

@end

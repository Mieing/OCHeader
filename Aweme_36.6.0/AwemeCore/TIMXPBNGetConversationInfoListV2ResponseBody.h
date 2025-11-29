@class GPBInt64Array, NSMutableArray;

@interface TIMXPBNGetConversationInfoListV2ResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationInfoListArray;
@property (readonly, nonatomic) unsigned long long conversationInfoListArray_Count;
@property (retain, nonatomic) GPBInt64Array *failedConversationShortIdsArray;
@property (readonly, nonatomic) unsigned long long failedConversationShortIdsArray_Count;

+ (id)descriptor;

@end

@class GPBInt64Array, NSMutableDictionary;

@interface TIMXPBNBatchUpdateBlockConversationWhiteMemberListRequestBody : GPBMessage

@property (nonatomic) long long convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (retain, nonatomic) GPBInt64Array *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;
@property (nonatomic) int updateAction;
@property (nonatomic) BOOL hasUpdateAction;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end

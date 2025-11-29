@class GPBInt64Array, NSMutableArray;

@interface TIMXPBNGetConversationSettingInfoExtRequestBody : GPBMessage

@property (retain, nonatomic) GPBInt64Array *convShortIdArray;
@property (readonly, nonatomic) unsigned long long convShortIdArray_Count;
@property (retain, nonatomic) NSMutableArray *extKeyArray;
@property (readonly, nonatomic) unsigned long long extKeyArray_Count;

+ (id)descriptor;

@end

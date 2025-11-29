@class GPBInt64ObjectDictionary, GPBInt64Int64Dictionary, NSMutableDictionary;

@interface TIMXPBNBatchGetConversationAuditUnreadResponseBody : GPBMessage

@property (retain, nonatomic) GPBInt64Int64Dictionary *unreadCount;
@property (readonly, nonatomic) unsigned long long unreadCount_Count;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *lastApplyInfo;
@property (readonly, nonatomic) unsigned long long lastApplyInfo_Count;

+ (id)descriptor;

@end

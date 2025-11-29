@interface AWEIMChatCellUnReadStrategy : NSObject

+ (id)getChatAvatarUrlList:(id)a0 config:(id)a1;
+ (id)abDemotedGroupIDs;
+ (long long)getIMGroupIdWithChat:(id)a0;
+ (void)cellUnreadStrategyWithChat:(id)a0 groupId:(long long)a1 config:(id)a2 completion:(id /* block */)a3;
+ (void)cellUnreadStrategyWithChat:(id)a0 config:(id)a1 completion:(id /* block */)a2;
+ (void)p_cellUnreadStrategyWithChat:(id)a0 config:(id)a1 completion:(id /* block */)a2;
+ (long long)p_getUnreadTypeWithChat:(id)a0;
+ (long long)p_getUnreadCount:(id)a0;
+ (long long)p_getBizUnreadTypeWithChat:(id)a0;
+ (BOOL)enableReportingFilterReason;
+ (void)recordFilterReason:(id)a0 forCid:(id)a1;
+ (void)clearFilterReasonForCid:(id)a0;
+ (BOOL)shouldDemoteWithGroupId:(long long)a0;
+ (BOOL)shouldUseChatModelGroupIDFirst;
+ (void)prepareForRecordFilterReasonIfNecessary;
+ (long long)getGroupIdWithChat:(id)a0;
+ (void)resetFilterReasonDict;
+ (id)filterReasonDict;

@end

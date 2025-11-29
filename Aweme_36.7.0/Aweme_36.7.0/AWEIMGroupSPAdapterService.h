@class NSString;

@interface AWEIMGroupSPAdapterService : NSObject <IESIMGroupSPAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)asyncGetGroupSPDowngradeWithConversationID:(id)a0;
- (BOOL)canTriggerGroupSPNoticeLink;
- (id)groupSPNoticeLinkRejectedDescription;
- (id)modifiedSchemaWithOriginSchemaString:(id)a0 conversationID:(id)a1;
- (BOOL)canShowActionRecord:(id)a0 onConversationID:(id)a1;
- (BOOL)canShowNormalTaskPopup;
- (BOOL)isGroupSPDowngradeWithConversationID:(id)a0;

@end

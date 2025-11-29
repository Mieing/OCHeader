@class NSString;

@interface IESIMCoreInsertMessageService : HTSService <BCAAInstanceService, IESIMCoreInsertMessageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonNeedFilterMsgAppidDict;
+ (BOOL)commonNeedFilterMsgWithMsgType:(long long)a0;
+ (BOOL)shouldSupportFilterAppidWithMsgType:(long long)a0 aweType:(long long)a1;
+ (BOOL)shouldFilterMsgAppIDWithExt:(id)a0;
+ (BOOL)shouldFilterDevicePlatformWithExt:(id)a0;
+ (id)sharedInstance;

- (BOOL)shouldFilterMessage:(long long)a0 messageContent:(id)a1 msgId:(long long)a2 conversationID:(id)a3 ext:(id)a4;

@end

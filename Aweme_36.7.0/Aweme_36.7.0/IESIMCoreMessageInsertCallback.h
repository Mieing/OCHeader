@class NSString;

@interface IESIMCoreMessageInsertCallback : NSObject <IESIMMessageInertPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)iesim_shouldFilterMessage:(long long)a0 messageContent:(id)a1 msgId:(long long)a2 conversationID:(id)a3 ext:(id)a4;
- (id)init;

@end

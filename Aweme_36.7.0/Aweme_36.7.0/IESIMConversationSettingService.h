@class NSString;

@interface IESIMConversationSettingService : NSObject <IESIMConversationSettingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canShowPrivateChatAIReplySwitchWithPeerUser:(id)a0;

@end

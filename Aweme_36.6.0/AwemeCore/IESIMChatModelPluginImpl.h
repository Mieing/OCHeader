@class NSString;

@interface IESIMChatModelPluginImpl : NSObject <IESIMChatModelPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)recommendInvitationUserMessageHintTextWithRecommendUsers:(id)a0;
- (id)getChatDisplayTextWithProjectXMessage:(id)a0;

@end

@class NSString;

@interface AWEIMIncentiveChatModuleService : HTSService <AWEIMIncentiveChatModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mangoRedPacketIncentiveTipDisplayManagerWithConversationID:(id)a0 enterFrom:(id)a1 scene:(unsigned long long)a2;
- (void)onIMStart;
- (id)legacyServiceIfNeededWithScene:(id)a0;

@end

@class NSString;

@interface AWEHamletOCModuleServiceImpl : HTSService <AWEHamletOCModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conversationInfoWithConversation:(id)a0;

- (void)getConversationInfoWithShortId:(long long)a0 callback:(id /* block */)a1;

@end

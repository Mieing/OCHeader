@class NSString;

@interface IESIMFormatService : HTSService <IESIMFormatService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)openProfileCardWithAISecUid:(id)a0 conversationId:(id)a1 enterSource:(unsigned long long)a2 params:(id)a3;

@end

@class NSString;

@interface IESIMGroupSharePluginImpl : NSObject <IESIMGroupSharePlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (void)insertGroupShareCommandMessageWithConversationId:(id)a0 completion:(id /* block */)a1;
- (id)createGroupSharePanelLayout;
- (id)myGroupViewControllerWithConfig:(id)a0;

@end

@class NSString;

@interface IESIMGroupManagementPluginImpl : NSObject <IESIMGroupManagementPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)shouldDoCustomFetchAdminDataWithConversation:(id)a0;
- (void)doCustomFetchAdminDataWithConversation:(id)a0 completion:(id /* block */)a1;
- (id)showBubbleOnQuestionView:(id)a0 withContent:(id)a1;
- (void)dismissBubbleOnQuestionView:(id)a0 completion:(id /* block */)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

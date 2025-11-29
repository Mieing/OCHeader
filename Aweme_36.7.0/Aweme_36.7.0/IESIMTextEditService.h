@class NSString;

@interface IESIMTextEditService : HTSService <IESIMTextEditService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTextEditViewController;
- (id)createGroupNoticeEditViewControllerWithConversation:(id)a0;
- (id)createHalfScreenGroupNoticeEditViewControllerWithConversation:(id)a0;
- (id)createGroupDescEditViewControllerWithConversation:(id)a0;
- (id)createHalfScreenGroupDescEditViewControllerWithConversation:(id)a0;
- (id)createGroupDescEditViewControllerWithDraft:(id)a0;
- (id)createGroupAliasEditViewControllerWithConversation:(id)a0;
- (id)createGroupNameEditViewControllerWithConversation:(id)a0;
- (id)createGroupDescEditVCWithConversation:(id)a0 pageTitle:(id)a1 placeHoldText:(id)a2 confirmTitle:(id)a3 disableTemplate:(BOOL)a4;
- (id)createGroupDescDisplayVCWithConversation:(id)a0 pageTitle:(id)a1;

@end

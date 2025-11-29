@class NSString;

@interface AWEIMGroupService : HTSService <AWEIMGroupService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createGroupWithConfiguration:(id)a0;

- (void)getConversationInfoWithConversationID:(id)a0 completionBlock:(id /* block */)a1;
- (Class)radarGroupCommandVCClass;
- (Class)radarGroupConfirmVCClass;
- (void)showShareCopyViewControllerWithText:(id)a0 customTitle:(id)a1 hideSubtitle:(BOOL)a2 customSubtitle:(id)a3 useSimplifyStyle:(BOOL)a4 context:(id)a5;
- (id)radarGroupCommandViewControllerWithGroupId:(id)a0 enterType:(long long)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (id)radarGroupNoticeList;

@end

@class NSString;

@interface AWENearbyUnderTakeGuideBubbleModuleService : HTSService <AWENearbyUnderTakeGuideBubbleModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showUnderTakeBubbleIfNeedWithEnterBubble:(id)a0 pageType:(long long)a1;
- (void)showDialogClickedBubbleIfNeedWithEnterBubble:(id)a0 pageType:(long long)a1;
- (void)showTaskTabTabBubbleWithEnterBubble:(id)a0 pageType:(long long)a1 task:(id)a2;
- (void)shouldShowUndertakeBubbleWithPageType:(long long)a0;
- (id)getUndertakeEnterBubbleWithPageType:(long long)a0;
- (void)updateNeedShowDialogClickBubble:(BOOL)a0;
- (BOOL)getNeedShowDialogClickBubble;

@end

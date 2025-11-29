@class NSString;

@interface IESIMUIKitService : HTSService <IESIMUIKitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMultiAvatarView;
- (void)updateWithViewController:(id)a0 navigationBarHidden:(BOOL)a1;
- (id)iesim_snapshotImage:(id)a0;
- (id)iesim_snapshotImageViewWithView:(id)a0;
- (id)iesim_snapshotImageViewAfterScreenUpdates:(BOOL)a0 view:(id)a1;
- (void)iesim_addReloadBlockForKey:(id)a0 view:(id)a1 andExecuteIt:(id /* block */)a2;
- (void)iesim_removeReloadBlockForKey:(id)a0 view:(id)a1;
- (id)gteTopNavigationControllerForTransferUtility;
- (BOOL)isPreferThemeWithImage:(id)a0;
- (id)preferDarkImageWithImage:(id)a0;
- (id)preferLightImageWithImage:(id)a0;
- (void)iesim_setStatusBarBackgroundColor:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectWithSize:(struct CGSize { double x0; double x1; })a0 maximumNumberOfLines:(unsigned long long)a1 attributedString:(id)a2;
- (id)attributedString:(id)a0 appendTailAttributedString:(id)a1 ellipsisAttributedString:(id)a2 maximumWidth:(double)a3 maximumNumberOfLines:(unsigned long long)a4 error:(id *)a5;
- (BOOL)parallelActionsLocked;
- (id)dominantColorWithImage:(id)a0;
- (void)configMultiAvatarViewInMsgStateScene:(id)a0 withAvatarArray:(id)a1;
- (void)configMultiAvatarViewInGroupNoticeScene:(id)a0 withAvatarArray:(id)a1;
- (void)iesim_setCornerRadius:(double)a0 view:(id)a1;
- (void)iesim_setHitTestingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 view:(id)a1;
- (void)configMultiAvatarView:(id)a0 withAvatarArray:(id)a1 avatarWidth:(double)a2 direction:(long long)a3;
- (double)navigationBarHeight;
- (double)statusBarHeight;
- (id)topViewController;

@end

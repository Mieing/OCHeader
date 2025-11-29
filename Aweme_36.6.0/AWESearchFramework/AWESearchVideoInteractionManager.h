@class NSString, AWEAwemeModel, NSLock, UIViewController;
@protocol AWECommentListViewControllerProtocol;

@interface AWESearchVideoInteractionManager : HTSService <AWESearchVideoInteractionManager>

@property (retain, nonatomic) NSLock *diggLock;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (nonatomic) BOOL commentVCHasShown;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *pageType;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playDiggAnimationInView:(id)a0 location:(struct CGPoint { double x0; double x1; })a1 image:(id)a2;
- (void)requireLoginWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)playProgressThreshold;
- (BOOL)userIsLogin;
- (void)diggWithModel:(id)a0 referString:(id)a1 completion:(id /* block */)a2;
- (BOOL)isInvalidAwemeModel:(id)a0 action:(unsigned long long)a1;
- (BOOL)doubleClickGuideLogin;
- (void)showCommentPanelWithModel:(id)a0 withCommentIDs:(id)a1 showInputView:(BOOL)a2 logExtra:(id)a3;
- (void)showSharePanelWithModel:(id)a0 logExtra:(id)a1;
- (void)showSharePanelWithModel:(id)a0 logExtra:(id)a1 type:(unsigned long long)a2;
- (void)commentDiggWithAwemeID:(id)a0 commentID:(id)a1 diggType:(long long)a2 completion:(id /* block */)a3;
- (void)doFavoriteWithModel:(id)a0 logExtra:(id)a1 favoriteAction:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)p_diggWithModel:(id)a0 referString:(id)a1 completion:(id /* block */)a2;
- (id /* block */)shareConfigurationHandlerWithModel:(id)a0 logExtra:(id)a1;
- (id)makeExtraLogInfoForSharingWithModel:(id)a0 logExtra:(id)a1;
- (void).cxx_destruct;

@end

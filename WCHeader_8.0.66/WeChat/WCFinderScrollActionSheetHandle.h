@interface WCFinderScrollActionSheetHandle : NSObject

+ (void)pushScrollActionSheetItem:(id)a0 didSelecteItem:(id)a1 fromVC:(id)a2 commentScene:(int)a3 delegate:(id)a4;
+ (void)_onClickTemplateVideo:(id)a0 didSelecteItem:(id)a1 fromVC:(id)a2 commentScene:(int)a3 contentVM:(id)a4 delegate:(id)a5;
+ (void)onClickToolbarFeedAllViewedAction:(id)a0 fromVC:(id)a1;
+ (void)_onClickBulletAuthor:(id)a0 item:(id)a1 fromVC:(id)a2 delegate:(id)a3;
+ (void)_onClickSubtitleAuthor:(id)a0 item:(id)a1 fromVC:(id)a2;
+ (void)_onClickFeedMenuReplayBullet:(id)a0 item:(id)a1 fromVC:(id)a2;
+ (void)changeContentVMPrivateState:(id)a0;
+ (void)showCommentLimitSheet:(id)a0 fromVC:(id)a1;

@end

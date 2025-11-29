@interface ACCFlashMobRouterHelper : NSObject

+ (void)startQuickFlashWithTitle:(id)a0 awemeModel:(id)a1 trackInfo:(id)a2;
+ (void)showFullPageViewWithStickerModel:(id)a0 awemeModel:(id)a1 trackInfo:(id)a2 activityDic:(id)a3;
+ (void)startQuickFlashWithStickerModel:(id)a0 awemeModel:(id)a1 trackInfo:(id)a2;
+ (void)showFullPageViewWithTitle:(id)a0 awemeModel:(id)a1 trackInfo:(id)a2 activityDic:(id)a3;
+ (void)showFullPageViewWithStyleConfig:(id)a0 stickerModel:(id)a1 awemeModel:(id)a2 enterFrom:(id)a3 logExtraDict:(id)a4 activityDic:(id)a5 trackContext:(id)a6 delegate:(id)a7;
+ (void)startQuickFlashPanelWithStickerModel:(id)a0 paramDict:(id)a1;
+ (void)startQuickFlashWithTitle:(id)a0 trackInfo:(id)a1;
+ (void)startQuickFlashWithStickerModel:(id)a0 trackInfo:(id)a1;
+ (void)startQuickFlashWithURL:(id)a0;
+ (void)showFullPageViewWithTitle:(id)a0 trackInfo:(id)a1 activityDic:(id)a2;
+ (void)showFullPageViewWithStickerModel:(id)a0 trackInfo:(id)a1 activityDic:(id)a2;
+ (void)showFullPageViewWithURL:(id)a0;

@end

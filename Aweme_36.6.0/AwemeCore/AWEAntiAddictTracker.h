@interface AWEAntiAddictTracker : NSObject

+ (void)trackToastShowWithContent:(id)a0 toastType:(id)a1;
+ (void)trackInnerPushWithActionType:(id)a0 enterFrom:(id)a1;
+ (void)trackToastCloseWithContent:(id)a0 type:(id)a1;
+ (void)trackToastClickWithContent:(id)a0 toastType:(id)a1 noticeType:(id)a2;
+ (void)trackToastSettingShowWithNoticeType:(id)a0 enterMethod:(id)a1;
+ (void)trackToastSettingClickWithNoticeType:(id)a0 enterMethod:(id)a1 clickPosition:(id)a2;

@end

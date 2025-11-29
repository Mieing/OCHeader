@interface WCEventTrackingSystem : NSObject <ClickStatSwizzleExt>

+ (void)trackEvent:(id)a0;
+ (void)trackSendAction:(SEL)a0 to:(id)a1 from:(id)a2 forEvent:(id)a3;
+ (void)trackUIButton:(id)a0;
+ (void)trackRichTextView:(id)a0;
+ (void)trackCell:(id)a0;
+ (void)trackSwitch:(id)a0 action:(SEL)a1 to:(id)a2 from:(id)a3;
+ (BOOL)isPrivacy:(id)a0;
+ (id)getCellLog:(id)a0;
+ (BOOL)openTrackingSystem;
+ (id)currentConfig;
+ (void)onSendEvent:(id)a0;
+ (void)onSendAction:(SEL)a0 to:(id)a1 from:(id)a2 forEvent:(id)a3;

@end

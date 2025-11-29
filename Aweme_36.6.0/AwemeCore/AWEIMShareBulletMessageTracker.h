@interface AWEIMShareBulletMessageTracker : NSObject

+ (BOOL)trackDidSelectShareUser:(id)a0 shareContext:(id)a1 inVC:(id)a2;
+ (BOOL)trackDidShareToShareUserList:(id)a0 shareContext:(id)a1 additionalText:(id)a2;
+ (BOOL)isBulletMessage:(id)a0;
+ (void)__trackShareCard:(id)a0 shareContext:(id)a1;
+ (void)__trackShareCardSendAction:(id)a0 shareContext:(id)a1 addtionalText:(id)a2;

@end

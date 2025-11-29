@interface MMLocalNotificationUtil : NSObject

+ (void)cancelAllNotReservedLocalNotificationsWithCompletion:(id /* block */)a0;
+ (void)cancelNotificationWithInfo:(id)a0;
+ (void)showLocalNotificationWithInfo:(id)a0;
+ (void)showLocalNotificationWithCategory:(id)a0 body:(id)a1 soundName:(id)a2 userInfo:(id)a3;
+ (void)showLocalNotificationWithCategory:(id)a0 title:(id)a1 body:(id)a2 soundName:(id)a3 badge:(id)a4 userInfo:(id)a5;
+ (void)showLocalNotificationWithIdentifier:(id)a0 category:(id)a1 title:(id)a2 body:(id)a3 soundName:(id)a4 badge:(id)a5 userInfo:(id)a6 date:(id)a7 threadIdentifier:(id)a8 fromUserName:(id)a9 fromNotFrient:(BOOL)a10 showHeadImage:(BOOL)a11;
+ (id)getImageFromURL:(id)a0;
+ (id)saveImage:(id)a0 withFileName:(id)a1 ofType:(id)a2 inDirectory:(id)a3;

@end

@interface WCSessionFlowUtils : MMObject

+ (id)sharedSessionQueue;
+ (id)encodeWithString:(id)a0;
+ (id)formatJsonStr:(id)a0;
+ (id)md5:(id)a0;
+ (id)getMainWindowTopViewController;
+ (id)stringEncrypt:(id)a0;
+ (id)stringDecrypt:(id)a0;
+ (id)encrypt:(id)a0;
+ (id)genTouchViewID:(id)a0 pageName:(id)a1;
+ (id)genControlViewID:(id)a0 pageName:(id)a1 target:(id)a2 action:(id)a3;
+ (id)genGestureViewID:(id)a0 pageName:(id)a1 target:(id)a2 action:(id)a3;
+ (id)parseJsonField:(id)a0 withKey:(id)a1;

@end

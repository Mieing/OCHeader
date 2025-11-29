@interface IESLLLynxEmbededViewManager : NSObject

+ (id)mainEmbeddedView:(id)a0;
+ (void)sendNotificationFromQueue;
+ (id)mainEmbeddedViewContainerID:(id)a0;
+ (void)holdMainEmbeddedView:(id)a0 sessionID:(id)a1;
+ (void)cleanEmbeddedView:(id)a0;
+ (void)publishEvent:(id)a0 params:(id)a1 sessionID:(id)a2;

@end

@interface IESLiveGamePlatformFullLinkMonitor : NSObject

+ (void)monitorWithOpenPlatformService:(id)a0 gameItem:(id)a1 isBeforeLive:(BOOL)a2 room:(id)a3 isSuccess:(BOOL)a4 parameters:(id)a5;
+ (void)monitorWithService:(id)a0 room:(id)a1 status:(id)a2 parameters:(id)a3;
+ (void)monitorWithService:(id)a0 gameItem:(id)a1 room:(id)a2 status:(id)a3 parameters:(id)a4;
+ (id)appTypeWithInteractiveID:(unsigned long long)a0;

@end

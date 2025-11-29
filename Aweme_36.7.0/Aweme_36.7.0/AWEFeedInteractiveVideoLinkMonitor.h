@class NSString;

@interface AWEFeedInteractiveVideoLinkMonitor : NSObject <AWEFeedInteractiveVideoLinkMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorEventName:(id)a0 status:(long long)a1 params:(id)a2;
+ (void)monitorShowEventWithStatus:(unsigned long long)a0 params:(id)a1;
+ (void)monitorStartPlayEventWithParams:(id)a0;
+ (void)monitorClickEventWithParams:(id)a0;
+ (void)monitorEnterActivitPageWithParams:(id)a0;
+ (void)monitorCloseEventWithParams:(id)a0;


@end

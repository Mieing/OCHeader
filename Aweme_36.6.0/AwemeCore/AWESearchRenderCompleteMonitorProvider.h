@class NSString;

@interface AWESearchRenderCompleteMonitorProvider : NSObject <AWESearchStageMonitorEventProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)handleEventDidEnd:(id)a0;
- (id)eliminateKeysBeforeSendEvent;
- (id)eventName;

@end

@class NSString, NSDictionary;

@interface AWEIMChatMemoryMonitor : HTSService <AWEIMChatMemoryMonitorService>

@property (copy, nonatomic) NSString *currentEvent;
@property (nonatomic) long long currentMemorySize;
@property (copy, nonatomic) NSDictionary *eventMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end

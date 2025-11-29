@class NSString;

@interface PIANSRService : NSObject <PIANSRService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (void)executePrepareServiceTask;
+ (void)injectBridgeGlobalAPI;

@end

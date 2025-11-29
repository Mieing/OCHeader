@class NSString;

@interface PTYMonitor : NSObject <PTYMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (BOOL)needUploadWithService:(id)a0;
+ (void)setup:(id)a0;


@end

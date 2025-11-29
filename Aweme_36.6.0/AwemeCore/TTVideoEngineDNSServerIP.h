@class NSString;

@interface TTVideoEngineDNSServerIP : NSObject <TTVideoEngineDNSProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateDNSServerIP;
+ (id)getDNSServerIP;
+ (id)sharedInstance;

- (void)parser:(id)a0 didFinishWithAddress:(id)a1 error:(id)a2;

@end

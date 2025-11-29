@class NSString;

@interface TXCustomHttpDNSDelegateImpl : NSObject <TXCustomHttpDNSDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCustomHttpDNS:(id)a0 ipList:(id)a1;

@end

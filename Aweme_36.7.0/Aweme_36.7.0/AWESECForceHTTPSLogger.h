@class NSString;

@interface AWESECForceHTTPSLogger : NSObject <SECForceHTTPSLoggerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)sampled;
- (void)handleEvent:(id)a0;

@end

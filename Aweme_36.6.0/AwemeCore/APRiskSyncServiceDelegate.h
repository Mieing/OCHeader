@class NSString;

@interface APRiskSyncServiceDelegate : NSObject <APRiskSyncServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandler:(id)a0;

@end

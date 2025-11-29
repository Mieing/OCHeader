@class NSString;

@interface TMBPEATaskBroker : NSObject <TMAPIControlTaskBroker>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)brokerId;
- (BOOL)respondToAPI:(id)a0;

@end

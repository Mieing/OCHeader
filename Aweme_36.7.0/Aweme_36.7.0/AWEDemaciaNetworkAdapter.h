@class NSString;

@interface AWEDemaciaNetworkAdapter : NSObject <AWEDemaciaNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestWithPayload:(id)a0;

@end

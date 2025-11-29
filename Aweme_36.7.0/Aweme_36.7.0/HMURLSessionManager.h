@class NSString;

@interface HMURLSessionManager : NSObject <HMNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestWithModel:(id)a0 callback:(id /* block */)a1;
- (id)requestWithModel:(id)a0;

@end

@class NSString;

@interface HMDHermasNetworkManager : NSObject <HMNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reqModelWith:(id)a0;
- (void)requestWithModel:(id)a0 callback:(id /* block */)a1;

@end

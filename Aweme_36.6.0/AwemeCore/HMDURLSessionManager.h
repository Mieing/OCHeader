@class NSString;

@interface HMDURLSessionManager : NSObject <HMDNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncRequestWithModel:(id)a0 callBackWithResponse:(id /* block */)a1;
- (void)uploadWithModel:(id)a0 callBackWithResponse:(id /* block */)a1;

@end

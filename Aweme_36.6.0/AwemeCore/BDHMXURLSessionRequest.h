@class NSString;

@interface BDHMXURLSessionRequest : NSObject <BDHMXNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncRequestWithURL:(id)a0 method:(id)a1 headerField:(id)a2 params:(id)a3 useAutoTagInfo:(BOOL)a4 callBack:(id /* block */)a5;
- (void)buildBodyDataWithParams:(id)a0 forRequest:(id)a1;

@end

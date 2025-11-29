@class NSString;

@interface AWEDataLayerNetworkImpl : NSObject <AWEDataLayerNetworkProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedImpl;

- (void)requestWithMethod:(id)a0 URLString:(id)a1 params:(id)a2 headerFields:(id)a3 config:(id)a4 completion:(id /* block */)a5;
- (long long)dataSizeFromModel:(id)a0;

@end

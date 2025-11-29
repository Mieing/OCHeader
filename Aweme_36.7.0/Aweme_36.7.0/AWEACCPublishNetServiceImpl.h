@class NSString;

@interface AWEACCPublishNetServiceImpl : NSObject <ACCPublishNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestUploadParametersWithCompletion:(id /* block */)a0;
- (void)requestUploadParametersWithParameters:(id)a0 completion:(id /* block */)a1;

@end

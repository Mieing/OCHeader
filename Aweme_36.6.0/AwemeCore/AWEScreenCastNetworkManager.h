@class NSString;

@interface AWEScreenCastNetworkManager : NSObject <BDSCNetService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postFeedbackParams:(id)a0 withCompletion:(id /* block */)a1;
- (void)redirectWithUrl:(id)a0 completion:(id /* block */)a1;

@end

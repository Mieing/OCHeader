@class NSString;

@interface AWEStudioLiveOpenServiceImpl : HTSService <AWEStudioLiveOpenService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openStartLivePage:(id)a0 completion:(id /* block */)a1;
- (id)openStudioPageWithInfo:(id)a0;
- (id)init;

@end

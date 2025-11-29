@class NSString;

@interface ACCAIGCProcessServiceImpl : HTSService <AWEStudioAIGCProcessProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uploadImages:(id)a0 extra:(id)a1 uploaderHolder:(id /* block */)a2 result:(id /* block */)a3;
- (void)uploadAudios:(id)a0 extra:(id)a1 uploaderHolder:(id /* block */)a2 result:(id /* block */)a3;
- (void)uploadVideos:(id)a0 extra:(id)a1 uploaderHolder:(id /* block */)a2 result:(id /* block */)a3;
- (void)downloadImages:(id)a0 complete:(id /* block */)a1;
- (void)requestAiProcessWithParams:(id)a0 timeOut:(double)a1 completion:(id /* block */)a2;
- (id)authModel;
- (void)refreshAuthModelWithCompletion:(id /* block */)a0;
- (int)test;

@end

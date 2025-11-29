@interface HTSLiveUnzipper : NSObject

- (void)unzipResource:(id)a0 toDestination:(id)a1 completion:(id /* block */)a2;
- (void)unzipResource:(id)a0 toDestination:(id)a1 retryCount:(int)a2 completion:(id /* block */)a3;

@end

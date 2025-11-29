@class NSString;

@interface AWEACCVideoPreloadImpl : NSObject <ACCVideoPreloadProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelGroup:(id)a0;
- (void)preloadVideo:(id)a0 andVideoURL:(id)a1 group:(id)a2 fileCs:(id)a3 urlKey:(id)a4;

@end

@class NSString;

@interface AWEECAwemeVideoPreloader : NSObject <IESECAwemeVideoPreloadProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPrefetchVideo:(id)a0 preloadSize:(unsigned long long)a1 tag:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)cancelPreload;

@end

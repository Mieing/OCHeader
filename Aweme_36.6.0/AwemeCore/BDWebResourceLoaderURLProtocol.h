@class NSString;

@interface BDWebResourceLoaderURLProtocol : NSURLProtocol <BDWebURLSchemeProtocolClass>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canInitWithSchemeTask:(id)a0;
+ (id)sharedCache;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end

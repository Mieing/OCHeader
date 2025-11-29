@class NSString;

@interface AnnieXSLResourceProvider : NSObject <LynxMediaResourceFetcher, LynxGenericResourceFetcher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shouldRedirectUrl:(id)a0;
- (long long)isLocalResource:(id)a0;
- (id)fetchResourcePathWithUrl:(id)a0;
- (id)stringByRemoveScheme:(id)a0;
- (id /* block */)fetchResource:(id)a0 onComplete:(id /* block */)a1;
- (id /* block */)fetchResourcePath:(id)a0 onComplete:(id /* block */)a1;

@end

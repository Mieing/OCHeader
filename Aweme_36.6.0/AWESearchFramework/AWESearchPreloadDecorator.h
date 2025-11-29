@class NSString;

@interface AWESearchPreloadDecorator : NSObject <BDWebRequestDecorator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdw_decorateSchemeTask:(id)a0;
- (id)bdw_decorateRequest:(id)a0;

@end

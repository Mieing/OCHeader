@class NSString;

@interface AnnieXLynxTemplateBundlePostProcessor : NSObject <IESForestPostProcessorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)processRawResponse:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (id)name;

@end

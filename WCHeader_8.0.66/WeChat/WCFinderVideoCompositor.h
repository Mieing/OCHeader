@class NSString;

@interface WCFinderVideoCompositor : NSObject <MMAssetCompositorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithTask:(id)a0 resultBlock:(id /* block */)a1;


@end

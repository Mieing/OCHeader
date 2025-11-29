@class NSString, MTLRenderPassDescriptor;

@interface TXCMetalRenderTargetView : NSObject <TXCMetalRenderTarget> {
    MTLRenderPassDescriptor *_renderPassDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSString;

@interface BDCTCaptureRenderView : UIImageView <BDCTCaptureRenderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)update:(struct __CVBuffer { } *)a0;

@end

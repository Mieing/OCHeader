@class NSString, CIContext;

@interface TXLiveCoreImageTransformFilter : NSObject <TXLivePixelBufferTransformFilter>

@property (retain, nonatomic) CIContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)process:(struct __CVBuffer { } *)a0 dstBuffer:(struct __CVBuffer { } *)a1;
- (void).cxx_destruct;

@end

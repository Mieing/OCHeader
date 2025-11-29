@class NSString;

@interface TXLiveVideoToolboxTransformFilter : NSObject <TXLivePixelBufferTransformFilter>

@property (nonatomic) void *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)process:(struct __CVBuffer { } *)a0 dstBuffer:(struct __CVBuffer { } *)a1;

@end

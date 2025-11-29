@interface SeiParams : NSObject

@property (nonatomic) struct CopyOnWriteBuffer { struct scoped_refptr<lite_base::RefCountedData<liteav::BufferT<unsigned char>>> { void *ptr_; } buffer_; unsigned long long offset_; unsigned long long size_; } payload;
@property (nonatomic) int repeat_times;

- (id)initWithPayload:(const void *)a0 repeat_times:(int)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

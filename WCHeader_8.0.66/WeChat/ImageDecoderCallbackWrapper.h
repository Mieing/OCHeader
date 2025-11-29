@interface ImageDecoderCallbackWrapper : NSObject

@property const struct Memory { char *x0; unsigned int x1; } *pixel;
@property int width;
@property int height;
@property struct function<void (const puppet::fdn::Memory *, unsigned int, unsigned int)> { struct __value_func<void (const puppet::fdn::Memory *, unsigned int, unsigned int)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } callback;

- (void)execute;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

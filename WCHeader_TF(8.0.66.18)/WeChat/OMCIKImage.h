@interface OMCIKImage : NSObject

@property (nonatomic) struct SharedPtr<XIKImage> { struct XIKImage *_ptr; } backingIKImage;

- (id)initWithBackingIKImage:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

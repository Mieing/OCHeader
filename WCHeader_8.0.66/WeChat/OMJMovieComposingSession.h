@interface OMJMovieComposingSession : NSObject

@property (nonatomic) struct SharedPtr<XMJMovieComposingSessionDelegate> { struct XMJMovieComposingSessionDelegate *_ptr; } backingSession;

- (id)initWithBackingSession:(const void *)a0;
- (void)startupWithcompletionHandler:(id /* block */)a0;
- (void)teardownWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

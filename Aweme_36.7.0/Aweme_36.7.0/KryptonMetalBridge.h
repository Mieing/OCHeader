@interface KryptonMetalBridge : NSObject {
    struct unique_ptr<native_renderer::CommandStreamProcessor, std::default_delete<native_renderer::CommandStreamProcessor>> { struct CommandStreamProcessor *__ptr_; } processor_;
    struct unique_ptr<ProcessorDelegateImpl, std::default_delete<ProcessorDelegateImpl>> { struct ProcessorDelegateImpl *__ptr_; } delegate_;
}

@property (copy, nonatomic) id /* block */ onFirstFrame;
@property (copy, nonatomic) id /* block */ onIncompatible;

- (void).cxx_destruct;
- (id).cxx_construct;

@end

@interface MBRuntimeOCWrapperDefaultImpl : NSObject <MBRuntimeOCWrapper>

@property (nonatomic) struct weak_ptr<magicbrush::MBRuntimeiOSCpp> { struct MBRuntimeiOSCpp *__ptr_; struct __shared_weak_count *__cntrl_; } runtime;

- (void)run;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

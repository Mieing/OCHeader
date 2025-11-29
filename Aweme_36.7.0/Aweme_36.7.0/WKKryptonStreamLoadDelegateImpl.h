@class NSString;

@interface WKKryptonStreamLoadDelegateImpl : NSObject <WKKryptonStreamLoadDelegate>

@property (nonatomic) struct function<void (lynx::wkcanvas::StreamLoadStatus, std::unique_ptr<lynx::wkcanvas::RawData>)> { struct __value_func<void (lynx::wkcanvas::StreamLoadStatus, std::unique_ptr<lynx::wkcanvas::RawData>)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onData:(id)a0;
- (void)onStart:(long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)onError:(id)a0;
- (void)onEnd;

@end

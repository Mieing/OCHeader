@class NSString;

@interface MMLiveFlowCancelationStatus : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancelationRequested;
}

@property (retain, nonatomic) NSString *identifier;
@property (readonly) BOOL cancelationRequested;

- (id)init;
- (BOOL)cancel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

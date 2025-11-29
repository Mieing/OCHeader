@interface AtomicCounter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) long long value;

- (void)add:(long long)a0;
- (id)initWithValue:(long long)a0;

@end

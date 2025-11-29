@interface DeallocHelper : NSObject {
    id m_target;
    id /* block */ m_callback;
}

+ (BOOL)exist:(id)a0 forKey:(const void *)a1;
+ (void)attachToObject:(id)a0 key:(const void *)a1 whenDeallocDoThis:(id /* block */)a2;
+ (void)dettachObject:(id)a0 key:(const void *)a1;

- (void)dealloc;
- (void).cxx_destruct;

@end

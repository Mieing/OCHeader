@interface FWFFinalizer : NSObject {
    long long _identifier;
    id /* block */ _callback;
}

+ (void)attachToInstance:(id)a0 withIdentifier:(long long)a1 callback:(id /* block */)a2;
+ (void)detachFromInstance:(id)a0;

- (id)initWithIdentifier:(long long)a0 callback:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end

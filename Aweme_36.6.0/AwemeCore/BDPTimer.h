@class BDPThreadSafeDictionary;

@interface BDPTimer : NSObject {
    BDPThreadSafeDictionary *_timeout;
    BDPThreadSafeDictionary *_timeoutNT;
    BDPThreadSafeDictionary *_intervalNT;
}

@property (retain, nonatomic) BDPThreadSafeDictionary *interval;

- (void)setTimeout:(long long)a0 time:(long long)a1 callbackQueue:(id)a2 callback:(id /* block */)a3;
- (void)setTimeout:(long long)a0 time:(long long)a1 inRunLoop:(id)a2 callback:(id /* block */)a3;
- (void)setTimeout:(long long)a0 time:(long long)a1 callbackMainThread:(id /* block */)a2;
- (void)setInterval:(long long)a0 time:(long long)a1 inRunLoop:(id)a2 callback:(id /* block */)a3;
- (void)setInterval:(long long)a0 time:(long long)a1 callbackMainThread:(id /* block */)a2;
- (void)_timerInnerFireFunction:(id)a0;
- (void)setInterval:(long long)a0 time:(long long)a1 callbackQueue:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)clearInterval:(long long)a0;
- (void)clearTimeout:(long long)a0;

@end

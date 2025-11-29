@class RACSignal, RACSubject, RACSerialDisposable;

@interface RACMulticastConnection : NSObject {
    int _hasConnected;
}

@property (readonly, nonatomic) RACSignal *sourceSignal;
@property (retain) RACSerialDisposable *serialDisposable;
@property (readonly, nonatomic) RACSubject *signal;

- (id)initWithSourceSignal:(id)a0 subject:(id)a1;
- (id)autoconnect;
- (void).cxx_destruct;
- (id)connect;

@end

@class FWFObjectFlutterApiImpl;

@interface FWFObject : NSObject

@property (readonly, nonatomic) FWFObjectFlutterApiImpl *objectApi;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end

@class BDXBridgeInvocationGuarderParams;

@interface BDXBridgeInvocationGuarder : NSObject

@property (retain, nonatomic) BDXBridgeInvocationGuarderParams *params;
@property (nonatomic) long long invocationCount;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (void)invoke;
- (void)dealloc;

@end

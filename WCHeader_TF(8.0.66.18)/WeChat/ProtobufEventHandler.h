@interface ProtobufEventHandler : NSObject

- (void)OnProtocolStart:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnProtocolConnectFail:(id)a0;

@end

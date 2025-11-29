@interface WeXRVisionAssistant.CBPeripheralDelegate : NSObject <CBPeripheralManagerDelegate> {
    void /* unknown type, empty encoding */ loginService;
}

- (void)peripheralManagerDidUpdateState:(id)a0;
- (void)peripheralManager:(id)a0 didAddService:(id)a1 error:(id)a2;
- (void)peripheralManagerDidStartAdvertising:(id)a0 error:(id)a1;
- (void)peripheralManager:(id)a0 didReceiveReadRequest:(id)a1;
- (void)peripheralManager:(id)a0 didReceiveWriteRequests:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end

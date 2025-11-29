@protocol RTVVoipModelStoreInterface;

@interface RTVVoipStateTransferActionHandler : RTVStateTransferActionHandler

@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;

+ (struct _RTVActionTypeRange { long long x0; long long x1; })supportActionTypeRange;

- (void)rxAwakeFromPropertyInjection;
- (id)doHandleAction:(id)a0;
- (id)handleUpdateVoipAction:(id)a0 event:(id)a1;
- (id)handleUpdateVoipAction:(id)a0 eventType:(long long)a1 eventCode:(long long)a2;
- (void).cxx_destruct;

@end

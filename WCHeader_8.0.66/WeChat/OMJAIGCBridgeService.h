@protocol OMJAIGCBridgeServiceDelegate;

@interface OMJAIGCBridgeService : NSObject

@property (nonatomic) struct SharedPtr<XMJBridgeAIGCService> { struct XMJBridgeAIGCService *_ptr; } backingService;
@property (weak, nonatomic) id<OMJAIGCBridgeServiceDelegate> delegate;

- (id)init;
- (void)setupCallback;
- (void)notifySubmitCompletionWithResponse:(id)a0 error:(id)a1;
- (void)notifyQueryCompletionWithResponse:(id)a0 error:(id)a1;
- (void)notifyCancelCompletionWithTaskID:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

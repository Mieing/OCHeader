@class NSString;

@interface TEEffectRenderMessageManagerBridge : NSObject <VEEffectMessageReceiver> {
    void *_mgr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shardInstanceWithCppMsgManager:(void *)a0;

- (void)messageCenter:(id)a0 didReceiveMessage:(id)a1;
- (id)initWithCppMsgManager:(void *)a0;

@end

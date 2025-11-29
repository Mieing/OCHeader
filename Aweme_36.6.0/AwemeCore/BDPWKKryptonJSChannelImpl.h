@class NSString, BDPUniqueID;

@interface BDPWKKryptonJSChannelImpl : NSObject <WKKryptonRemoteJSChannelService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendToJSObject:(id)a0 objectId:(unsigned int)a1 type:(id)a2 message:(id)a3 onFinish:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end

@class NSString, BDPThreadSafeDictionary, BDPSubscribeStorageV2, BDPUniqueID;

@interface BDPSubscribeV2 : NSObject <BDPDynamicContainerEventMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPSubscribeStorageV2 *subscribeStorage;
@property (retain, nonatomic) BDPThreadSafeDictionary *callbackDict;
@property (retain, nonatomic) BDPThreadSafeDictionary *callbackAuthedDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBullet2NativeEvent:(id)a0 containerId:(id)a1;
- (void)onBulletDestroy:(id)a0;
- (void)requestV2SubscribeMessageWithParam:(id)a0 callback:(id /* block */)a1;
- (BOOL)needFetchFullTplData;
- (void)showLynxAuthorizeDialogWithUniqueID:(id)a0 tplData:(id)a1 callback:(id /* block */)a2;
- (BOOL)timeTypeSameWithTemplateList:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end

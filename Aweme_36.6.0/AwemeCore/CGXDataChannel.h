@class NSString, CGXCustomMessageModuleBridge, NSMutableDictionary;

@interface CGXDataChannel : CGObject <CGCloudPlayerStatusUpdateMessage, CGXCustomMessageDelegate, CGDataChannel>

@property (weak, nonatomic) CGXCustomMessageModuleBridge *cusotomMessageModule;
@property (retain, nonatomic) NSMutableDictionary *dictHandlers;
@property (retain, nonatomic) NSMutableDictionary *dataHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)onMessage:(id)a0;
- (void)onBinaryMessage:(id)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)sendMessageWithData:(id)a0;
- (void)sendMessageWithString:(id)a0;
- (void)sendMessageWithDictionary:(id)a0;
- (void)registerDataMessageWithMsgType:(int)a0 msgSubType:(int)a1 target:(id)a2 selector:(SEL)a3;
- (void)registerDictionaryMessageWithCommand:(long long)a0 target:(id)a1 selector:(SEL)a2;
- (void).cxx_destruct;

@end

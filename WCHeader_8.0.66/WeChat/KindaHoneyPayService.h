@class NSString, MMVoidStringCallback;

@interface KindaHoneyPayService : NSObject <WCPaySelectSingleContactControlLogicDelegate, MMKHoneyPayService>

@property (retain, nonatomic) MMVoidStringCallback *callBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBubbleMsg:(id)a0 msgContent:(id)a1 username:(id)a2;
- (void)handleOfflineThings:(int)a0 bindSerial:(id)a1;
- (void)selectSingeContactImpl:(id)a0 resultCallback:(id)a1;
- (void)stopSelectSingleContact;
- (void)dealloc;
- (void)selectSingleContactLogic:(id)a0 didSelectContact:(id)a1;
- (void)jumpToBankcardList;
- (void).cxx_destruct;

@end

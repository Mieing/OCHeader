@class NSString, NSMapTable;
@protocol IESLCMessageHandlerProtocol;

@interface AWEProfileLongConnectionManager : NSObject <IESLCMessageHandlerService>

@property (retain, nonatomic) NSMapTable *profileHandlerMap;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bizHandlerClzNameStaticRegisterDic;
+ (id)sharedInstance;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)addHandlerForStaticRegister;
- (void)fetchShortLinkPackageDataForBizIds:(id)a0 isColdLaunch:(BOOL)a1;
- (void)p_handleProfileMessagePayloadModel:(id)a0 eventParams:(id)a1;
- (void)addWeakProfileHandler:(id)a0 forBizId:(id)a1;
- (void)p_handleProfileMessageData:(id)a0 eventParams:(id)a1;
- (void)fetchShortLinkPackageDataForBizIds:(id)a0;
- (void)addWeakProfileHandler:(id)a0 forBizIds:(id)a1;
- (void)removeProfileHandlerForBizId:(id)a0;
- (BOOL)sendProfileLCMessageCell:(id)a0 forBizId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

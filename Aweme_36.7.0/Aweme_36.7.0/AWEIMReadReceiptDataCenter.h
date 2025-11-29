@class NSSet, NSString, NSHashTable;
@protocol IESLCConnectManagerProtocol, IESIMConversationReadReceiptProtocol;

@interface AWEIMReadReceiptDataCenter : NSObject <IESIMUserServiceMessage, IESLCConnectService, IESIMLoginManagerMessage>

@property (retain, nonatomic) id<IESIMConversationReadReceiptProtocol> conversationReadReceiptManager;
@property (copy, nonatomic) NSHashTable *readReceiptPullingDataSources;
@property (copy, nonatomic) NSSet *requestingIDs;
@property (nonatomic) BOOL hasRegisterNoti;
@property (nonatomic) BOOL lastRequestSuccess;
@property (nonatomic) BOOL hasSentInitialRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;

+ (BOOL)isConnected;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)addPullingDataSource:(id)a0;
- (void)onReceiveReadReceiptPush:(id)a0;
- (void)stopPullingTimer;
- (id)createReadReceiptReqModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)registerNotifications;
- (id)init;
- (void)unregisterNotifications;
- (void)commonInit;
- (void)dealloc;

@end

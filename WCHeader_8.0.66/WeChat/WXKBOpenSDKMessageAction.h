@class NSString, AppCommunicateData, OpenApiAppMsgGenerator;

@interface WXKBOpenSDKMessageAction : WXKBMessageAction <IAppDataExt>

@property (retain, nonatomic) AppCommunicateData *communicateData;
@property (retain, nonatomic) OpenApiAppMsgGenerator *messageGenerator;
@property (nonatomic) BOOL hasFetchedAppRegisterInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicVideoOpenParamsFromMessage:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)privatePerform;
- (long long)openSDKMessageType;
- (BOOL)precheck;
- (id)getAppId;
- (BOOL)needFetchAppRegisterInfo;
- (void)fetchAppRegisterInfo;
- (void)onFetchedAppRegisterInfoTimeOut;
- (void)onFetchedAppRegisterInfo;
- (BOOL)openMessageAtPc:(id)a0;
- (BOOL)openMessage:(id)a0;
- (id)generateEmoticonMessage;
- (void)OnAppInfoChanged:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, NSMutableArray;
@protocol AWEECOMIMPaasClientBridgeProtocol;

@interface AWEECOMIMLoginUtil : NSObject <AWEUserMessage>

@property (retain) id<AWEECOMIMPaasClientBridgeProtocol> pigeonClient;
@property (nonatomic) BOOL isInSetup;
@property (retain) NSMutableArray *setupCompletionBlocks;
@property (nonatomic) double clientInitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonParams;
+ (long long)appVersionCode;
+ (id)imClient;
+ (id)pigeonClient;
+ (id)generateNotificationKeyWithKey:(id)a0;
+ (id)shortLinkServerURLString;
+ (id)wsServerURLsArr;
+ (long long)fpServiceIntegerValue;
+ (long long)bizWsServiceIntegerValue;
+ (id)wsCustomHeadersDict;
+ (id)customBizID;
+ (id)imsdkConfig;
+ (void)setupPigeonClientWithDefaultConfigWithCompletion:(id /* block */)a0;
+ (id)shopBizType;
+ (id)instantRetailBizType;
+ (id)authorBizType;
+ (long long)authorInbox;
+ (long long)shopInbox;
+ (long long)instantRetailInbox;
+ (void)p_setupPigeonClientWithDefaultConfigWithCompletion:(id /* block */)a0;
+ (id)commonIMCloudParams;
+ (BOOL)websocketUseDY;
+ (id)additionalIMCloudParams;
+ (id)shared;

- (void)didFinishLogoutWithUid:(id)a0;
- (id)pigeonSign;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isLogin;

@end

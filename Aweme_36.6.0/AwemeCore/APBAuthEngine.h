@class NSString, APBReactor;

@interface APBAuthEngine : NSObject

@property (nonatomic) BOOL isBusy;
@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) APBReactor *reactor;
@property (copy, nonatomic) id /* block */ rcb;
@property (copy, nonatomic) id /* block */ ecb;
@property (retain, nonatomic) id cardInstance;
@property (retain, nonatomic) id faceInstance;
@property (nonatomic) BOOL bIsCardFace;

+ (id)getBioMetaInfo;
+ (unsigned int)needLanguageCode;
+ (id)getAuthFactorName;
+ (void)loadWithWifiOnly:(BOOL)a0;
+ (id)EyePrintVersion;
+ (BOOL)assetReady;
+ (long long)languageCode;
+ (id)getVersion;
+ (void)preLoad;

- (void)exec:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void)onQuit:(id)a0;
- (void)onCloseUploadPage:(id)a0;
- (void)authWithRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)configureCardFace:(id)a0;
- (void)configureFcToken:(id)a0;
- (id)_responseBy:(int)a0 failReason:(id)a1 retCodeSub:(id)a2 retMessageSub:(id)a3;
- (id)_bisClientDictBy:(id)a0;
- (void)_fcAddMonitor:(id)a0 seedId:(id)a1 ucid:(id)a2 param4:(id)a3;
- (void)_addMonitor:(id)a0 parm2:(id)a1 parm3:(int)a2;
- (id)_globalConfig:(id)a0;
- (void).cxx_destruct;
- (id)version;
- (id)init;
- (void)dealloc;
- (void)_addNotificationObserver;
- (void)_removeNotificationObserver;

@end

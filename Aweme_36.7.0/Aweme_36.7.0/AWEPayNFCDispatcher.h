@class AWEPayNFCSession, CJPayNFCConfig;

@interface AWEPayNFCDispatcher : NSObject

@property (retain, nonatomic) AWEPayNFCSession *todoSession;
@property BOOL inColdLaunchProgress;
@property (nonatomic) BOOL isColdLaunch;
@property (retain, nonatomic) CJPayNFCConfig *nfcSettings;

+ (BOOL)isInNFCColdLaunchProgress;
+ (void)goToDefaultPage:(id)a0;
+ (void)transferToBusiness:(id)a0 originDeeplinkURL:(id)a1 isColdLaunch:(BOOL)a2 isInnerNFCScan:(BOOL)a3;
+ (id)sharedInstance;

- (void)accountPrivacyPolicyAgreeNoti;
- (void)transferToBusiness:(id)a0;
- (BOOL)bidIsForbid:(id)a0;
- (void)cleanLastTransfer;
- (void).cxx_destruct;

@end

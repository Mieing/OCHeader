@class NSArray, NSDictionary, MMKV, NSString;

@interface AWEPadPiPServiceImpl : NSObject <DUXInAppNotificationViewDelegate, AWEPadPiPService>

@property (retain, nonatomic) NSArray *internalPiPWhiteList;
@property (retain, nonatomic) NSArray *internalPiPBlackList;
@property (retain, nonatomic) NSArray *backgroundPiPWhiteList;
@property (retain, nonatomic) NSDictionary *whiteListSceneDict;
@property (nonatomic) long long closeNotificationByHand;
@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL padIMPipSwitch;

+ (id)sharedInstance;

- (void)performPadPiPWithOptions:(unsigned long long)a0 execute:(id /* block */)a1;
- (void)notificationDidDismiss:(id)a0;
- (void)notificationDidTapInteractiveComponent:(id)a0;
- (void)showGoSettingInAppNoti;
- (void).cxx_destruct;

@end

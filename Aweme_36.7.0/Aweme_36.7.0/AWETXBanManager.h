@class NSString, AWEStorage;

@interface AWETXBanManager : NSObject <AWEUserMessage, AWETXBanManagerProtocol>

@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) BOOL isChangeNameAndAvatarAlertViewShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)shouldShowAlertView;
- (void)hasShowAlertView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

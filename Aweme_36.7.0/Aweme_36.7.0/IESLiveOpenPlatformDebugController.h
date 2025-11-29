@class UIButton, NSString;

@interface IESLiveOpenPlatformDebugController : NSObject <IESLiveGameOpenPlatformDeveloperConfigServiceInterface>

@property (retain, nonatomic) UIButton *debugView;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *currentDebugAppID;
@property (readonly, copy, nonatomic) NSString *currentDebugGameID;
@property (readonly, copy, nonatomic) NSString *currentSchema;
@property (nonatomic) unsigned long long launchState;
@property (nonatomic) unsigned long long performancePanelState;
@property (nonatomic) unsigned long long performanceTestState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentGameID:(id)a0;
- (void)setCurrentAppID:(id)a0;
- (id)_actionSheetItems;
- (BOOL)isValidDeveloperSchema:(id)a0;
- (BOOL)isValidDeveloperAppId:(id)a0;
- (void)clearDeveloperPlayingInfo;
- (void)setCurrentSchema:(id)a0;
- (BOOL)_isCameraDenied;
- (void)_showCameraDeniedAlert;
- (void)_convertSchema:(id)a0 callBack:(id /* block */)a1;
- (id)_processOpenPlatformSchema:(id)a0;
- (void)_scanQRCode;
- (void)_handleDebugViewClicked;
- (void)setValid:(BOOL)a0;
- (void).cxx_destruct;

@end

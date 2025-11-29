@class AWEIMFaceToFaceImageGeckoSetting, NSString, AWEIMSpringFaceToFaceActivityModel;
@protocol IESIMBackpackSPCommandMsgNotifierProtocol;

@interface AWEIMFaceToFaceActivityManager : NSObject <IESIMBackpackSPCommandMsgNotifierProtocolDelegate>

@property (nonatomic) unsigned long long settingsType;
@property (retain, nonatomic) AWEIMSpringFaceToFaceActivityModel *faceToFaceActivityModel;
@property (retain, nonatomic) id<IESIMBackpackSPCommandMsgNotifierProtocol> faceToFacecommandMsgNotifier;
@property (retain, nonatomic) AWEIMFaceToFaceImageGeckoSetting *geckoImageSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldReportForAPI:(id)a0;
+ (BOOL)__isSpringFestivalActive;
+ (BOOL)__enablePushFeature;
+ (BOOL)__enableFaceToFaceSpringActivityFeature;
+ (double)__reportSampleForAPI:(id)a0;
+ (id)__faceToFaceSettingConfig;
+ (BOOL)__enableFaceToFaceSpringAutoPop;
+ (id)faceToFaceSchemaModel;
+ (id)sharedInstance;

- (id)faceToFacePanelKeyboardData;
- (id)pushModel;
- (id)faceToFaceViewConfig;
- (void)personalSettingsUpdate;
- (id)__currentPushModel;
- (void)iesim_didReceiveBackpackSPCommandMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

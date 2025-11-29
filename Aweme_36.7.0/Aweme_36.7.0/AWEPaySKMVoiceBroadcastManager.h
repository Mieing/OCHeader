@class NSString, NSNumber, AWEPaySKMVoiceBroadcastTaskManager;

@interface AWEPaySKMVoiceBroadcastManager : NSObject <AWEUserMessage>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *switchKey;
@property (retain, nonatomic) NSNumber *isAudioSwitchOn;
@property (retain, nonatomic) AWEPaySKMVoiceBroadcastTaskManager *voiceTaskManager;
@property (nonatomic) BOOL isAlertShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)voicePlayWithAmount:(id)a0 audioUrl:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceSwitchStatusCompletion:(id /* block */)a0;
- (void)setVoiceSwitchStatus:(BOOL)a0 completion:(id /* block */)a1 notiCert:(id)a2 goSettingsCert:(id)a3;
- (void)didComeback;
- (void)voicePlayWithData:(id)a0;
- (void)registerVoiceBroadcastInnerPushEvent;
- (void)voicePlayWithAmount:(id)a0;
- (void).cxx_destruct;

@end

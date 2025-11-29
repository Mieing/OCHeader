@class NSString, ACCVoiceEffectEditSession, UIView;

@interface ACCVoiceEffectManager : NSObject

@property (retain, nonatomic) NSString *panelName;
@property (retain, nonatomic) NSString *categoryKey;
@property (retain, nonatomic) ACCVoiceEffectEditSession *editSession;
@property (nonatomic) BOOL toastHasDisplayed;
@property (nonatomic) BOOL voiceHadRecovered;
@property (nonatomic) unsigned long long logTag;
@property (nonatomic) BOOL shouldShowToast;
@property (weak, nonatomic) UIView *toastReferenceView;

+ (id)voiceEffectForEffectID:(id)a0;

- (void)recoverVoiceEffect:(id)a0 toEditService:(id)a1 withPublishViewModel:(id)a2 recoverCompletion:(id /* block */)a3;
- (void)downloadEffects:(id)a0 completion:(id /* block */)a1;
- (void)loadEffectsByEffectIDs:(id)a0 completion:(id /* block */)a1;
- (void)toastFailure;
- (void)recoverVoiceEffectsToEditService:(id)a0 withPublishViewModel:(id)a1 completion:(id /* block */)a2;
- (long long)downloadStatusForEffectModel:(id)a0;
- (void)downloadEffect:(id)a0 completion:(id /* block */)a1;
- (void)clearVoiceEffectToEditService:(id)a0 withPublishViewModel:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end

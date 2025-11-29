@class NSString, AWEBinding;

@interface AWEIMAudioMessagePlayerComponent : AWEIMComponentBase <AWEIMAudioMessagePlayerInterface, AWEIMMessageListDataAction, AWEFormatIMConversationInjectAudioMessageService>

@property (retain, nonatomic) AWEBinding *autoPlayBind;
@property (retain, nonatomic) AWEBinding *startPlayBind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)interruptCurrentAudioMessagePlayer;
- (void)bindAudioMessageDidPlayWithCallback:(id /* block */)a0;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)willDeleteMessage:(id)a0;
- (void)setAutoPlayAfterDownloadFinishVM:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

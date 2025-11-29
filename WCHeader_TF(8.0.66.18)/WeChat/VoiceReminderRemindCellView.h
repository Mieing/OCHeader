@class UIButton, VoiceReminderRemindViewModel;

@interface VoiceReminderRemindCellView : CommonMessageCellView <IAudioReceiverExt> {
    UIButton *m_playButton;
    long long m_playCount;
    BOOL m_playing;
}

@property (readonly, nonatomic) VoiceReminderRemindViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)layoutContentView;
- (void)initView;
- (void)onPlayButtonClicked:(id)a0;
- (void)startPlayVoice;
- (void)stopPlayVoice;
- (void)downloadAppData;
- (void)OnEndPlaying:(id)a0 isForceStop:(BOOL)a1;
- (void).cxx_destruct;

@end

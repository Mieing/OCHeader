@class UIView, NSString, UIImageView, MMUIActivityIndicatorView, VoiceReminderConfirmViewModel, UILabel, UIButton;

@interface VoiceReminderConfirmCellView : BaseMessageCellView <IVoiceReminderExt, IAudioReceiverExt, ISettingExtChange> {
    int m_playCount;
    BOOL m_playing;
    BOOL m_deleting;
    UIImageView *m_bgImageView;
    UIImageView *m_remindStatusImageView;
    UIImageView *m_bodyBkgImageView;
    UILabel *m_dateLabel;
    UILabel *m_timeLabel;
    UILabel *m_timeDescLabel;
    UILabel *m_descLabel;
    UIButton *m_playButton;
    UIButton *m_cancelButton;
    MMUIActivityIndicatorView *m_spinner;
    UIView *m_maskView;
    UIView *m_separatorView;
}

@property (readonly, nonatomic) VoiceReminderConfirmViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)layoutContentView;
- (void)setHighlighted:(BOOL)a0;
- (void)initView;
- (void)onDelete:(id)a0;
- (void)onCancelButtonClicked:(id)a0;
- (void)onPlayButtonClicked:(id)a0;
- (void)startPlayVoice;
- (void)stopPlayVoice;
- (id)getRemindBackgroundImage:(id)a0;
- (void)becomeRemindStatus;
- (void)cancelRemindMsg:(id)a0;
- (void)downloadAppData;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onDeleteRemindMsgsReturn:(BOOL)a0 msgWrap:(id)a1;
- (void)OnEndPlaying:(id)a0 isForceStop:(BOOL)a1;
- (void)onSettingExtChanged:(long long)a0;
- (void).cxx_destruct;

@end

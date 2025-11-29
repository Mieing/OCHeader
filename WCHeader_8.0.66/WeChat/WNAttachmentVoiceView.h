@class NSString, UILabel, MMUIButton, UIView;

@interface WNAttachmentVoiceView : WNAttachmentBaseView <IWNAudioMgrExt> {
    UILabel *_titleLabel;
    UILabel *_totalTimeLabel;
    MMUIButton *_controlBtn;
    int _viewType;
    UIView *_recordingPoint;
    UIView *_progressIndicator;
    UIView *_progressBackView;
    UIView *_progressFrontView;
    BOOL _userDragging;
    double _titleWidth;
}

@property (nonatomic) unsigned int timems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttachment:(id)a0;
- (BOOL)ifLayoutViewByBase;
- (void)setSelected;
- (void)setUnSelected;
- (void)layoutView;
- (void)onClickObject;
- (void)onIndicatorPan:(id)a0;
- (void)setProgressIndicatorCenterX:(double)a0;
- (void)showNormalView;
- (void)showRecordingView;
- (void)traitCollectionDidChange:(id)a0;
- (void)showPlayingView;
- (void)onClickControlBtn;
- (id)getDuration:(int)a0;
- (void)OnEndWNAudioRecordWithObj:(id)a0 FilePath:(id)a1 VoiceTime:(float)a2 VoiceFmt:(unsigned int)a3;
- (void)OnStartWNAudioRecordWithObj:(id)a0;
- (void)UpdateWNAudioRecordWithObj:(id)a0;
- (void)OnBeginPlayWNAudio:(id)a0;
- (void)OnEndPlayWNAudio:(id)a0;
- (void)OnAudioPlaying:(id)a0 Offset:(unsigned int)a1;
- (id)getSubViewAccessibilityRecursive;
- (void).cxx_destruct;

@end

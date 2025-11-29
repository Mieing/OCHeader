@class NSString, UILabel, UIImageView;

@interface WNAttachmentChatVoiceView : WNAttachmentBaseView <IWNAudioMgrExt> {
    UILabel *titleLabel;
    UIImageView *playingImageView;
    int viewType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttachment:(id)a0;
- (BOOL)ifLayoutViewByBase;
- (void)layoutView;
- (void)showNormalView;
- (void)showPlayingView;
- (void)onClickObject;
- (id)getDuration:(int)a0;
- (void)OnBeginPlayWNAudio:(id)a0;
- (void)OnEndPlayWNAudio:(id)a0;
- (void).cxx_destruct;

@end

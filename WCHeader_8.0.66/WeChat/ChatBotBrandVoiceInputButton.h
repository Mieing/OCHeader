@class UIImageView, MMUILabel, UIView;
@protocol ChatBotBrandVoiceInputButtonDelegate;

@interface ChatBotBrandVoiceInputButton : UIView {
    double lastVolume;
}

@property (retain, nonatomic) UIImageView *voiceView;
@property (retain, nonatomic) UIView *voiceBgView;
@property (retain, nonatomic) MMUILabel *recordingPromptLabel;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) id<ChatBotBrandVoiceInputButtonDelegate> delegate;

- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutVioceButton;
- (void)layoutRecordingPromptLabel;
- (void)setActive:(BOOL)a0;
- (void)handleLongPress:(id)a0;
- (void)updateRippleSizeByVolumeDB:(double)a0;
- (void)resizeViewWithoutChangingCenter:(id)a0 newSize:(struct CGSize { double x0; double x1; })a1 duration:(double)a2;
- (void).cxx_destruct;

@end

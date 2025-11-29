@class WCBrandAudioPlayView, NSString, UIView, NSMutableArray, VoiceReaderMessageViewModel;

@interface VoiceReaderMessageCellView : ReaderMessageCellView <IMusicPlayerExt, TingFlowPlayerNotification> {
    UIView *m_titleTimeView;
    WCBrandAudioPlayView *m_playingImageView;
}

@property (retain, nonatomic) NSMutableArray *voiceOverElements;
@property (readonly, nonatomic) VoiceReaderMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)initPlayingImageView;
- (id)viewForTitleAndTimeLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void)initVoiceOverElements;
- (void)updateVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)getSuperViewAccessibilityLabel;
- (void).cxx_destruct;

@end

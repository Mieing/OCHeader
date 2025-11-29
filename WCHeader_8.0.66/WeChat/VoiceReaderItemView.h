@class UIView, NSString, UILabel, TingItem, NSMutableArray, WCBrandAudioPlayView;

@interface VoiceReaderItemView : ReaderItemView <IMusicPlayerExt, TingFlowPlayerNotification> {
    WCBrandAudioPlayView *m_playingImageView;
    UIView *m_titleTimeView;
    UILabel *m_timeLabel;
}

@property (retain, nonatomic) NSMutableArray *voiceOverElements;
@property (retain, nonatomic) TingItem *tingItem;
@property (nonatomic) unsigned int playLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)topView;
- (void)normalView;
- (void)initPlayBtn:(BOOL)a0;
- (void)initVoiceOverElements;
- (void)updateVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end

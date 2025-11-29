@class NSMutableArray, NSString, MMTimer, CTRichTextView, VoiceTransInfo;

@interface VoiceMessageViewModel : CommonMessageViewModel <ITranslateMsgMgrExt, VoiceTranslateMsgMgrExt> {
    BOOL m_isLastStatusUnPlay;
    unsigned int m_startPlayCount;
    MMTimer *m_playingTimer;
    double m_currentPlayRate;
}

@property (retain, nonatomic) CTRichTextView *richTextViewForCalcu;
@property (readonly, nonatomic) double voiceTimeLength;
@property (nonatomic) double voiceNodeWidth;
@property (nonatomic) double voiceNodeHeight;
@property (readonly, nonatomic) NSString *voiceTimeStirng;
@property (nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } translatedTextSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } displayTextSize;
@property (retain, nonatomic) VoiceTransInfo *voiceTranslateInfo;
@property (nonatomic) BOOL inMultiSelectStatus;
@property (nonatomic) BOOL bShowingQuickTranTips;
@property (nonatomic) BOOL bDelayRetryPlay;
@property (nonatomic) struct CGSize { double width; double height; } textTranslateTextSize;
@property (retain, nonatomic) NSMutableArray *textTranslateTextStyles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (id)getVoiceTimeStirng:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (void)dealloc;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCellFrame;
- (id)pathOfTranslateResult;
- (BOOL)hasLocalTranslateResult;
- (BOOL)isTranslateEnd;
- (BOOL)canShowTranslateText;
- (BOOL)canShowTranslateLoadingView;
- (double)tableOffsetToScroll;
- (void)adjustTableOffset;
- (void)adjustTableOffsetByPop:(double)a0;
- (BOOL)canShowPlayRateButton;
- (id)playRateTitle;
- (void)onClickPlayRate;
- (double)currentPlayRate;
- (void)reportKV;
- (BOOL)canShowTextTranslateEntry;
- (BOOL)canShowTextTranslateView;
- (BOOL)canShowTextTranslateText;
- (id)textTranslateInfo;
- (struct CGSize { double x0; double x1; })calculateTextTranslatedTextSize;
- (void)translateVoice;
- (void)stopTranslateVoice;
- (void)removeTranslateVoiceInfo;
- (void)foldTranslateResult;
- (void)animateShowQuickTransTips;
- (void)animateHiddenQuickTransTips;
- (void)onMessageStartPlaying;
- (void)timerEvent;
- (void)onMessageStopPlaying;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (BOOL)canShowResumeButton;
- (BOOL)useEnhanceColor;
- (void)onTranslateMessageFailed:(id)a0 errTip:(id)a1;
- (void)onTranslateMessageChanged:(id)a0;
- (void)OnVoiceTranslateBegin:(id)a0;
- (void).cxx_destruct;

@end

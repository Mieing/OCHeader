@class EmoticonBoardView, MMQuickSendEmoticonView, MMFinderLiveSFBarrageCellView, MMFinderLiveTaskId, UIView, MMLiveInputToolView, MMLiveVoiceInputView;
@protocol MMFinderLiveCommentInputEmoticonViewDelegate;

@interface MMFinderLiveCommentInputEmoticonView : UIView

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveSFBarrageCellView *barragePreviewView;
@property (retain, nonatomic) UIView *barragePreviewDescView;
@property (nonatomic) BOOL autoLoopAnimation;
@property (nonatomic) BOOL isLastBigEmoticonEnabled;
@property (weak, nonatomic) id<MMFinderLiveCommentInputEmoticonViewDelegate> delegate;
@property (retain, nonatomic) MMLiveInputToolView *liveInputView;
@property (retain, nonatomic) EmoticonBoardView *emoticonBoardView;
@property (retain, nonatomic) MMLiveVoiceInputView *voiceInputView;
@property (retain, nonatomic) MMQuickSendEmoticonView *quickSendEmoticonView;

- (id)initWithLiveTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInputView;
- (void)layoutEmoticonBoardView;
- (void)layoutVoiceInputView;
- (void)layoutQuickSendEmoticonView;
- (void)bringSubviewToFront:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)refreshEmoticonBoardViewType;
- (void)reloadCurUserHeadImageViewIfNeed;
- (id)liveTask;
- (id)liveCommentInputViewPlaceholder;
- (BOOL)checkEnableBigEmoticon;
- (void)delayAnimateBarrageIfNeeded;
- (void)runBarrageAnimation;
- (void)removeBarrageAnimation;
- (BOOL)isCurrentPortrait;
- (void).cxx_destruct;

@end

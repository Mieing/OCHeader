@class ACCPollStickerView, UIView, NSMutableArray, ACCAnimatedButton;

@interface ACCPollStickerEditView : UIView

@property (retain, nonatomic) UIView *textMaskView;
@property (retain, nonatomic) ACCAnimatedButton *finishButton;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *originSuperView;
@property (nonatomic) BOOL beginLabelProgress;
@property (nonatomic) BOOL isEditFinished;
@property (nonatomic) BOOL needRecover;
@property (nonatomic) double leftBeyond;
@property (retain, nonatomic) ACCPollStickerView *currentStickerView;
@property (retain, nonatomic) ACCPollStickerView *currentOperationView;
@property (retain, nonatomic) NSMutableArray *stickerViews;
@property (copy, nonatomic) id /* block */ finishEditBlock;
@property (copy, nonatomic) id /* block */ finishAnimationEditBlock;
@property (copy, nonatomic) id /* block */ startEditBlock;
@property (copy, nonatomic) id /* block */ takeScreenShotRecover;

- (void)startEditStickerView:(id)a0;
- (void)didClickedTextMaskView;
- (void)didFinishEdit;
- (void)handleKeyboardChangeFrameNoti:(id)a0;
- (void)handleKeyboardWillHideNoti:(id)a0;
- (void)handleKeyboardWillShowNoti:(id)a0;
- (void)setVoteInfoWhenFinish;
- (void)didClickedFinish:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)p_removeObservers;
- (void)p_addObservers;

@end

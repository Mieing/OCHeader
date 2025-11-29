@class IESLiveFaceEffectAigcBackgroundKeywordPickView, IESLiveFaceEffectAigcProgressBar, UILabel, UIView, UIButton;
@protocol IESLiveFaceEffectAigcImageGenerateViewDelegate;

@interface IESLiveFaceEffectAigcImageGenerateView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *blueClickBtn;
@property (retain, nonatomic) IESLiveFaceEffectAigcBackgroundKeywordPickView *pickerView;
@property (retain, nonatomic) IESLiveFaceEffectAigcProgressBar *progressBar;
@property (retain, nonatomic) UILabel *keywordTipLabel;
@property (retain, nonatomic) UILabel *resultTipLabel;
@property (retain, nonatomic) UIButton *whiteClickBtn;
@property (weak, nonatomic) id<IESLiveFaceEffectAigcImageGenerateViewDelegate> delegate;

- (void)hideSubViews;
- (void)updateKeywords:(id)a0;
- (void)setProgressTo:(double)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)blueBtnStatusChange;
- (void)generateBtnClicked:(id)a0;
- (void)reSelectBtnClicked:(id)a0;
- (void)reGenerateBtnClicked:(id)a0;
- (void)aigcBgGenerateConfirmBtnClicked:(id)a0;
- (void)onInitialStatus;
- (void)onGeneratingProgressStatus;
- (void)onGenerateResultStatus:(long long)a0;
- (void)onHistoryStatus:(BOOL)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end

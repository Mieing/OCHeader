@class UIButton, HTSLiveScorllLabelView;

@interface IESLiveSoloKTVPieceTitleView : UIView

@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) HTSLiveScorllLabelView *titleLabel;
@property (retain, nonatomic) UIButton *singPieceBtn;
@property (retain, nonatomic) UIButton *completionBtn;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ backClickBlock;
@property (copy, nonatomic) id /* block */ singPieceClickBlock;
@property (copy, nonatomic) id /* block */ completionClickBlock;

- (void)showCompletion:(BOOL)a0;
- (void)clickBack:(id)a0;
- (void)startTitleAnimationIfNeed;
- (void)clickSingPiece:(id)a0;
- (void)clickCompletion:(id)a0;
- (void)showSingPieceBtn:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateTitle:(id)a0;

@end

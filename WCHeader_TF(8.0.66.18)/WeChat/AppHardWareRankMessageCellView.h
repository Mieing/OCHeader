@class AppHardWareRankMessageViewModel, UIImageView, AppHardWareRankMessageLogicController, UILabel, UIButton;

@interface AppHardWareRankMessageCellView : BaseMessageCellView {
    UIImageView *m_bgImageView;
    UILabel *m_scoreDisplay;
    UILabel *m_scoreTitle;
    UILabel *m_rankDisplay;
    UILabel *m_rankTitle;
    UIButton *m_stateBtn;
}

@property (retain, nonatomic) AppHardWareRankMessageLogicController *logicController;
@property (readonly, nonatomic) AppHardWareRankMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)setHighlighted:(BOOL)a0;
- (void)initStateBtn:(int)a0 offsetY:(double *)a1;
- (id)getBackgroundImage;
- (id)getBackgroundImageHL;
- (id)getFontColor;
- (void)onTouchUpInside;
- (void)onClickStateBtn;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupAccessibility;
- (id)removeAllNumberAndComma:(id)a0;
- (void).cxx_destruct;

@end

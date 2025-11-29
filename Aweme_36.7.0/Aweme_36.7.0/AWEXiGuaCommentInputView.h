@class AWEAwemeModel, UILabel, UIView, UIButton;

@interface AWEXiGuaCommentInputView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *placeView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *placeButton;
@property (retain, nonatomic) UIButton *commentButton;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;

+ (double)viewHeight;

- (void)configureUI;
- (void)traceWithEvent:(id)a0 enterMethod:(id)a1;
- (void)moreButtonTapped;
- (void)xiguaCommentTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

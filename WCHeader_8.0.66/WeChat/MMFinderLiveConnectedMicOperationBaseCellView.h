@class UIButton, UIView;

@interface MMFinderLiveConnectedMicOperationBaseCellView : UIView

@property (retain, nonatomic) UIButton *quitBtn;
@property (retain, nonatomic) UIButton *pkBtn;
@property (retain, nonatomic) UIView *splitLine;
@property (nonatomic) BOOL showQuitButton;
@property (copy, nonatomic) id /* block */ quitActionBlock;
@property (copy, nonatomic) id /* block */ pkActionBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)onQuitMic:(id)a0;
- (void)onPk:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

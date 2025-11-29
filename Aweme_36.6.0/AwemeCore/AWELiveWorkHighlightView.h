@class UIImageView, LiveTabResponse_ReplayItem, UILabel, UIView;

@interface AWELiveWorkHighlightView : UIView

@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *leftTextView;
@property (retain, nonatomic) UILabel *rightTextView;
@property (retain, nonatomic) UIImageView *rightButton;
@property (retain, nonatomic) LiveTabResponse_ReplayItem *playBackData;

- (void)p_gestureAction:(id)a0;
- (void)setupDataWithModel:(id)a0;
- (long long)getFirstHighlight:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

@class UIButton, UIView, UIScrollView, UILabel, IESLiveMediaTitleStore;

@interface IESLiveMediaIntroductionView : UIView

@property (retain, nonatomic) IESLiveMediaTitleStore *store;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *alphaBtn;
@property (retain, nonatomic) UIView *actionView;

- (void)buildView:(double)a0;
- (void)didClickPickUp;
- (id)textWithStr:(id)a0 font:(id)a1 paragraphSpacing:(double)a2;
- (void)resizeContent;
- (id)initWithStore:(id)a0 titleOffset:(double)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

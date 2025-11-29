@class UIButton;

@interface IESECGoodsInternalFeedCustomNavigationBar : UIView

@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeButtonDidTap;
@property (copy, nonatomic) id /* block */ searchButtonDidTap;
@property (copy, nonatomic) id /* block */ mallEntranceDidTap;
@property (copy, nonatomic) id /* block */ eventTrack;
@property (nonatomic) BOOL shouldShowMallEntrance;

- (void)closeButtonDidClick:(id)a0;
- (void)mallEntranceDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

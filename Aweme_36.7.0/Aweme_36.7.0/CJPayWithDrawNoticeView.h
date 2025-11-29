@class NSString, UIImageView, CJPayRunlampView, UILabel;

@interface CJPayWithDrawNoticeView : UIView

@property (retain, nonatomic) UIImageView *suonaView;
@property (retain, nonatomic) CJPayRunlampView *marqueeView;
@property (copy, nonatomic) NSString *lastNotice;
@property (retain, nonatomic) UILabel *showResponseLabel;

- (void)bindViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupUI;

@end

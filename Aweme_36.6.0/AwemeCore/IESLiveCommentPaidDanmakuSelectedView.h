@class IESLiveAnimatedImageView, HTSLiveTabItem, UIImageView;

@interface IESLiveCommentPaidDanmakuSelectedView : UIView

@property (retain, nonatomic) HTSLiveTabItem *currentTabItem;
@property (retain, nonatomic) IESLiveAnimatedImageView *imageView;
@property (retain, nonatomic) UIImageView *closeBtn;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL fold;

- (void)updateWithTabItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupViews;

@end

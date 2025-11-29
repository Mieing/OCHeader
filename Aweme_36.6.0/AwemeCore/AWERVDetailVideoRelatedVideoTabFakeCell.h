@class AWERVDetailPageContext, UIView;

@interface AWERVDetailVideoRelatedVideoTabFakeCell : UIView

@property (retain, nonatomic) UIView *coverBanner;
@property (retain, nonatomic) UIView *nicknameBanner;
@property (retain, nonatomic) UIView *avatarBanner;
@property (retain, nonatomic) UIView *followBanner;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContext:(id)a1;
- (id)createBanner;
- (void).cxx_destruct;
- (void)setupUI;

@end

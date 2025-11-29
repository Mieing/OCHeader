@class BDSCNewNotFindNotiTipsView, BDSCImageView;

@interface BDSCNewNotFindNotiView : UIView

@property (retain, nonatomic) BDSCNewNotFindNotiTipsView *confirmTipsView;
@property (retain, nonatomic) BDSCImageView *lineImageView;
@property (retain, nonatomic) BDSCNewNotFindNotiTipsView *netTipsView;
@property (nonatomic) BOOL isLandscape;

- (id)localConfig;
- (void)configSubviews;
- (id)localNewTipsConfig;
- (double)lineImageWidth;
- (double)lineImageHeight;
- (double)lineImageTopAndBottomMargin;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

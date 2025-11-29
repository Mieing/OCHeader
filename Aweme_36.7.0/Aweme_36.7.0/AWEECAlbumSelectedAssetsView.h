@class NSString, UIImageView, UILabel, UIView;

@interface AWEECAlbumSelectedAssetsView : CAKAlbumSelectedAssetsView

@property (retain, nonatomic) UIView *tipBarView;
@property (nonatomic) BOOL isTipBarClosed;
@property (retain, nonatomic) UIImageView *couponView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (copy, nonatomic) id /* block */ closeTipBarBlock;
@property (copy, nonatomic) NSString *customTips;
@property (copy, nonatomic) NSString *couponIcon;
@property (nonatomic) BOOL newStyle;

- (void)reloadSelectView;
- (void)setupTipBarView;
- (void)closeTipBarAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

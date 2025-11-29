@class IESLiveImageView, UILabel, NSData, AWELiveWebPPlayer;

@interface AWELivePreStreamLiveDistributeHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveImageView *closeImageView;
@property (retain, nonatomic) AWELiveWebPPlayer *liveAnimationView;
@property (retain, nonatomic) NSData *liveAnimationDefaultData;

- (void)p_initUI;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

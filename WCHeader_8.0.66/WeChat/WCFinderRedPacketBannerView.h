@class UIImageView, ThankRedPackageInfo, UILabel, UIView;
@protocol WCFinderRedPacketBannerViewDelegate;

@interface WCFinderRedPacketBannerView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) ThankRedPackageInfo *redpackageInfo;
@property (weak, nonatomic) id<WCFinderRedPacketBannerViewDelegate> delegate;

+ (void)bindRedPackageFromView:(id)a0 likePanel:(long long)a1 redPacketProgress:(int)a2 contentVM:(id)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateRedpackageInfo:(id)a0;
- (void)layoutAllSubviews;
- (void)showSeparateLine;
- (void).cxx_destruct;

@end

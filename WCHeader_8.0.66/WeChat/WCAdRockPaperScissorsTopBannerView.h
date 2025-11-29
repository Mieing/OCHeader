@class MMUIButton, WCAdRockPaperScissorsInfo, WCAdTwinTurboPagView;
@protocol WCAdRockPaperScissorsTopBannerDelegate;

@interface WCAdRockPaperScissorsTopBannerView : UIView

@property (retain, nonatomic) WCAdRockPaperScissorsInfo *adRockPaperScissorsInfo;
@property (weak, nonatomic) id<WCAdRockPaperScissorsTopBannerDelegate> delegate;
@property (retain, nonatomic) WCAdTwinTurboPagView *animationPagView;
@property (retain, nonatomic) MMUIButton *foregroundButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adRockPaperScissorsInfo:(id)a1 delegate:(id)a2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (void)onForegroundButtonClicked:(id)a0;
- (id)rockPaperScissorsLogic;
- (void).cxx_destruct;

@end

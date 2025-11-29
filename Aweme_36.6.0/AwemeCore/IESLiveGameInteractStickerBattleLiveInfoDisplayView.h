@class UILabel, LiveInfo;

@interface IESLiveGameInteractStickerBattleLiveInfoDisplayView : UIView

@property (retain, nonatomic) LiveInfo *liveInfo;
@property (retain, nonatomic) UILabel *winRateLabel;
@property (retain, nonatomic) UILabel *winningStreakLabel;
@property (nonatomic) double scaleRatio;

- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

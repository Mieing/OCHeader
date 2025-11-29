@class WCFinderLiveRedPacketItemView, UIView;

@interface WCFinderLiveRedPacketPanel : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) WCFinderLiveRedPacketItemView *redPacketItemView;
@property (retain, nonatomic) WCFinderLiveRedPacketItemView *lotteryItemView;
@property (copy, nonatomic) id /* block */ liveRedPacketPanelBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)lotteryClick;
- (void)redPacketClick;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void).cxx_destruct;

@end

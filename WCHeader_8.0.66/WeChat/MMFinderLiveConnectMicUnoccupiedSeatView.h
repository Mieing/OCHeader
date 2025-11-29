@class MMFinderLiveConnectMicSeatNameLabel, UIImageView, MMFinderLiveConnectMicSeatInfo, UILabel;
@protocol MMFinderLiveConnectMicUnoccupiedSeatViewDelegate;

@interface MMFinderLiveConnectMicUnoccupiedSeatView : UIView

@property (retain, nonatomic) UIImageView *addIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMFinderLiveConnectMicSeatNameLabel *seatNameLabel;
@property (retain, nonatomic) MMFinderLiveConnectMicSeatInfo *micSeatInfo;
@property (nonatomic) unsigned long long pkState;
@property (nonatomic) unsigned long long micLayoutMode;
@property (weak, nonatomic) id<MMFinderLiveConnectMicUnoccupiedSeatViewDelegate> actionDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configUI;
- (void)onTapBackground:(id)a0;
- (void)layoutUI;
- (void)updateWithSeatInfo:(id)a0 micLayoutMode:(unsigned long long)a1 pkState:(unsigned long long)a2;
- (BOOL)isSmallMode;
- (void).cxx_destruct;

@end

@class WCDataItem, WCAdRollView, UIImageView, MMUIView, MMUILabel;

@interface WCAdLiveDisplayView : MMUIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL isFullCard;
@property (retain, nonatomic) MMUIView *liveStatusView;
@property (retain, nonatomic) UIImageView *liveStatusIcon;
@property (retain, nonatomic) MMUILabel *liveStatusText;
@property (retain, nonatomic) WCAdRollView *liveDescView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 isFullCard:(BOOL)a2;
- (void)initView;
- (void)updateLiveStatus:(int)a0;
- (void)showLiveStatusViewWithText:(id)a0 bgColor:(id)a1;
- (void)updateLiveStatusViewLayout;
- (void)onViewDisplay:(BOOL)a0;
- (void).cxx_destruct;

@end

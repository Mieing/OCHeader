@class NSString, PAGView, UIView, TingItem;

@interface TingPlayStatusView : UIView

@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) UIView *coverLayerView;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) TingItem *tingItem;
@property (retain, nonatomic) NSString *tid;
@property (nonatomic) double pagWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTingItem:(id)a0;
- (void)setPlayStatus:(int)a0;
- (int)getCurPlayStatus;
- (void)layoutSubviews;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 onStatusChanged:(int)a2;
- (id)player;
- (void).cxx_destruct;

@end

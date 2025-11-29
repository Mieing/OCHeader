@class NSString, IESECTracker;

@interface IESECWinOrderButton : IESECButton

@property (copy, nonatomic) NSString *orderDetailURL;
@property (retain, nonatomic) IESECTracker *tracker;

- (void)trackShow;
- (void)trackClick;
- (void)orderAction;
- (void)updateWithObject:(id)a0;
- (id)getBtmIDWithHost:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

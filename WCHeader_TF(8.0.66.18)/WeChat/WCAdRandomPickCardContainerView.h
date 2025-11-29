@class WCDataItem, WCAdRandomPickCardView;

@interface WCAdRandomPickCardContainerView : MMUIView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (weak, nonatomic) WCAdRandomPickCardView *weakPickCardView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 scene:(unsigned long long)a2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)layoutPickCardView;
- (void)cleanUpRandomPickCardView;
- (void)refreshRandomPickCardView;
- (void).cxx_destruct;

@end

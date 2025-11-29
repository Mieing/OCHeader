@class AWEFullScreenAdEggModel, AWEAdTagView;

@interface AWEFullScreenAdEggMainConvertAreaView : UIView

@property (retain, nonatomic) AWEAdTagView *adTagView;
@property (retain, nonatomic) AWEFullScreenAdEggModel *model;

- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithModel:(id)a0;

@end

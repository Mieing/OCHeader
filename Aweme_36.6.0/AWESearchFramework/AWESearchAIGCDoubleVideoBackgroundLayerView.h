@class AWESearchAIGCDoubleVideoLoadMoreTopLayer, NSString, UIView;

@interface AWESearchAIGCDoubleVideoBackgroundLayerView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) AWESearchAIGCDoubleVideoLoadMoreTopLayer *topMoreLayer;
@property (copy, nonatomic) NSString *root;
@property (copy, nonatomic) NSString *searchId;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;

@end

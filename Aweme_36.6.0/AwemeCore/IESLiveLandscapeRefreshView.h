@class UIImageView, UITapGestureRecognizer;

@interface IESLiveLandscapeRefreshView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (copy, nonatomic) id /* block */ tapBlock;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)handleTapGesture:(id)a0;

@end

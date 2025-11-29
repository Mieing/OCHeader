@class AWEMusicGuideToastView;
@protocol AWEMusicGuideToastContainerViewDelegate;

@interface AWEMusicGuideToastContainerView : UIView

@property (retain, nonatomic) AWEMusicGuideToastView *toastView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetViewFrame;
@property (weak, nonatomic) id<AWEMusicGuideToastContainerViewDelegate> delegate;

- (id)initWithToastView:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

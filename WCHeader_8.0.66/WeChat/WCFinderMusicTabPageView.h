@protocol WCFinderMusicTabPageViewDelegate;

@interface WCFinderMusicTabPageView : WCFinderTabPageView

@property (weak, nonatomic) id<WCFinderMusicTabPageViewDelegate> delegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

@protocol AWEDetailTrendMusicListConfiguration;

@interface AWEDetailTrendMusicListContainerView : UIView

@property (retain, nonatomic) id<AWEDetailTrendMusicListConfiguration> contentConfiguration;

- (id)initWithContentConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

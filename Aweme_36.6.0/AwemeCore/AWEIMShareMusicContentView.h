@class AWEIMShareMusicContentProps;

@interface AWEIMShareMusicContentView : AWEIMGeneralCardView

@property (retain, nonatomic) AWEIMShareMusicContentProps *props;

- (void)p_addGesture;
- (void)updateWithProps:(id)a0;
- (void)p_onTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class UIView;

@interface IESLiveMultiKTVDraggedContainerView : UIView

@property (retain, nonatomic) UIView *controlBarContainer;
@property (retain, nonatomic) UIView *midiContainer;
@property (retain, nonatomic) UIView *lyricsContainer;

- (void)remakeConstrainsWithMidiContainerShow:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end

@class NSString;
@protocol TPAVPlayerLayerViewDelegate;

@interface TPAVPlayerLayerView : UIView

@property (nonatomic) BOOL firstFrameRendered;
@property (nonatomic) NSString *videoFillMode;
@property (weak, nonatomic) id<TPAVPlayerLayerViewDelegate> delegate;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setLayerPlayer:(id)a0;
- (void)resetView;
- (void)setNeedsDisplay;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end

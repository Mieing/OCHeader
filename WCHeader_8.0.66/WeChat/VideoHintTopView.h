@protocol VideoHintTopViewDelegate;

@interface VideoHintTopView : MMUIView

@property (weak, nonatomic) id<VideoHintTopViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)onClickMore:(id)a0;
- (void)onClickClose:(id)a0;
- (void).cxx_destruct;

@end

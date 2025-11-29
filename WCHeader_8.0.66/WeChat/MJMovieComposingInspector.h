@class UIViewController, UIView, MMUIButton, MMUILabel;
@protocol MJMovieComposingInspectorDelegate;

@interface MJMovieComposingInspector : MMUIView

@property (retain, nonatomic) UIView *topBar;
@property (weak, nonatomic) id<MJMovieComposingInspectorDelegate> delegate;
@property (readonly, nonatomic) MMUILabel *titleLabel;
@property (readonly, nonatomic) MMUIButton *doneButton;
@property (readonly, nonatomic) MMUIButton *cancelButton;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIViewController *contentViewController;

- (void)willMoveToSuperview:(id)a0;
- (void)removeFromSuperview;
- (id)initWithContentView:(id)a0;
- (id)initWithContentViewController:(id)a0;
- (void)dealloc;
- (void)setupViews;
- (void)layoutViews;
- (void)hideCancelButtonAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end

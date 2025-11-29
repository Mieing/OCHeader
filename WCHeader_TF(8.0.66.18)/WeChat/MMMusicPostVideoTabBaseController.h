@class MMUIViewController, UIView;

@interface MMMusicPostVideoTabBaseController : NSObject {
    UIView *_contentView;
}

@property (weak) MMUIViewController *viewController;
@property (nonatomic) BOOL isActive;

- (id)initWithViewController:(id)a0;
- (id)contentView;
- (id)arrPanGestures;
- (void)onSwitchToThisPage:(BOOL)a0;
- (void)setCurrEposideDuration:(double)a0;
- (void)updateCurrEposideDuration:(double)a0;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)a0;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)generatePreviewDataSource;
- (void).cxx_destruct;

@end

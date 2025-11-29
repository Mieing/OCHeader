@class MMWebTopBarStyleConfig, SightIconView, NSMutableArray, MMUILabel;
@protocol MMWebTopBarDelegate;

@interface MMWebTopBar : UIView

@property (retain, nonatomic) NSMutableArray *applyingStyles;
@property (retain, nonatomic) MMWebTopBarStyleConfig *currentStyle;
@property (retain, nonatomic) MMUILabel *label;
@property (retain, nonatomic) SightIconView *loadView;
@property (nonatomic) BOOL canShow;
@property (weak, nonatomic) id<MMWebTopBarDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubView;
- (void)layoutSubviews;
- (void)startShowStyle:(id)a0;
- (void)endShowStyle:(id)a0;
- (void)updateCurrentShowStyle;
- (void)setText:(id)a0 withHideLoad:(BOOL)a1;
- (void)updateWithCurrentStyle;
- (BOOL)haveStyleToShow;
- (BOOL)isLoadingShowing;
- (void).cxx_destruct;

@end

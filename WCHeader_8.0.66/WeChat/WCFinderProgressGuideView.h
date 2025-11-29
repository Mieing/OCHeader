@class UILabel, PAGView, NSString;

@interface WCFinderProgressGuideView : UIView <PAGViewListener>

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) PAGView *pagView;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isDismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)displayPAG;
- (void)onAnimationEnd:(id)a0;
- (void).cxx_destruct;

@end

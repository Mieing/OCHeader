@class UIImageView, NSString;

@interface WCFinderSteramProfileBarView : UIView <WCFinderSteramProfileBarViewInterface>

@property (retain, nonatomic) UIImageView *closeIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initCloseIcon;
- (void)updateDisplayDragCloseProgress:(double)a0;
- (void)doLayout;
- (void)layoutSubviews;
- (void)updateBarBGColor:(id)a0 arrowColor:(id)a1;
- (void).cxx_destruct;

@end

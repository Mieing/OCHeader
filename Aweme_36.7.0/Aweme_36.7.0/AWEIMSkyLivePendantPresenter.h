@class UIColor, NSString;

@interface AWEIMSkyLivePendantPresenter : AWEIMSkylightBasePresenter

@property (nonatomic) BOOL showIndicator;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) NSString *iconText;

- (unsigned long long)componentViewPosition;
- (void)updateView:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSize;
- (void).cxx_destruct;
- (id)createView;

@end

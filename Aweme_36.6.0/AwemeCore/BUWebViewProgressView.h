@class UIColor, NSString, UIView;

@interface BUWebViewProgressView : UIView <BUWebViewDelegate>

@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) UIColor *lineFillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)finished;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (void)reset;
- (void)setProgress:(double)a0;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidStartLoad:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;
- (void)setupViews;

@end

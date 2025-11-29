@class UILabel, CAGradientLayer, NSString;

@interface AWELiveStoryBrowserTagView : UIView <AWELiveStoryBrowserTagViewProtocol>

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) CAGradientLayer *tagLayer;
@property (nonatomic) double fontSize;
@property (nonatomic) struct CGPoint { double x; double y; } labelPadding;
@property (nonatomic) double borderWidth;
@property (nonatomic) struct CGColor { } *borderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fontSize:(double)a1 labelPadding:(struct CGPoint { double x0; double x1; })a2;
- (void)updateFrame:(id)a0;
- (void)setlabelPadding:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setGradientColor:(id)a0;

@end

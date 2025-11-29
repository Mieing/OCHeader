@class MMUILabel;

@interface MMFinderLiveProductQuestionSignView : UIView

@property (retain, nonatomic) MMUILabel *signLabel;

+ (struct CGSize { double x0; double x1; })getProductQuestionSize;
+ (id)productQuestionSignText;
+ (id)signLabelFont;
+ (double)insetLeft;
+ (double)insetRight;
+ (double)iconSignInset;
+ (double)insetTop;

- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSignLabel;
- (void).cxx_destruct;

@end

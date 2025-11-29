@class UILabel, UIView;
@protocol POICorrectionTextViewDelegate;

@interface POICorrectionTextView : UIView

@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *topSeperatorLine;
@property (weak, nonatomic) id<POICorrectionTextViewDelegate> delegate;
@property (nonatomic) BOOL isFooterStyle;
@property (nonatomic) BOOL isTopSeperatorValid;
@property (nonatomic) double contentPaddingX;

+ (double)contentHeight:(double)a0 isFooterStyle:(BOOL)a1 paddingX:(double)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

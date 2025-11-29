@class UIColor, MMUIActivityIndicatorView, NSString, UIFont, UILabel, UIView;

@interface WCStoryRefreshFooterView : MMRefreshTableFooterView

@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *endView;
@property (nonatomic) double lineViewWidth;
@property (nonatomic) double lineViewHeight;
@property (copy, nonatomic) NSString *normalText;
@property (copy, nonatomic) NSString *loadingText;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) BOOL darkStyle;
@property (nonatomic) BOOL centerAlignLabel;

+ (double)heightForWidth:(double)a0 darkSytle:(BOOL)a1;
+ (id)terminatorViewParamsWithTip:(id)a0 darkSytle:(BOOL)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 whiteLoading:(BOOL)a1 darkSytle:(BOOL)a2;
- (id)initWhiteLoadingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 darkSytle:(BOOL)a1;
- (void)useMMSettingStyle;
- (void)resetStatus:(unsigned long long)a0;
- (unsigned long long)getStatus;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)a0;
- (void)onStateOfNoData:(id)a0;
- (void)layoutSubviews;
- (id)labelColor;
- (void).cxx_destruct;

@end

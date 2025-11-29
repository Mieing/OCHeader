@class MMUIActivityIndicatorView, NSString, UIFont, UIView, WCFinderLocationTerminatorViewParams, WCFinderLocationReportModel, UILabel, UIColor;
@protocol WCFinderLocationFooterViewDelegate;

@interface WCFinderLocationFooterView : MMRefreshTableFooterView

@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *endView;
@property (retain, nonatomic) UIView *customizedBlankView;
@property (nonatomic) double lineViewWidth;
@property (nonatomic) double lineViewHeight;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) NSString *normalText;
@property (retain, nonatomic) NSString *noMoreSubTitle;
@property (retain, nonatomic) NSString *loadingText;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) BOOL centerAlignLabel;
@property (nonatomic) BOOL labelSingleLine;
@property (nonatomic) BOOL enabledAfterRefreshing;
@property (nonatomic) BOOL labelNewLineBreakRules;
@property (retain, nonatomic) WCFinderLocationTerminatorViewParams *params;
@property (weak, nonatomic) id<WCFinderLocationFooterViewDelegate> delegate;
@property (retain, nonatomic) WCFinderLocationReportModel *reportModel;

+ (double)defaultHeightWithWidth:(double)a0;
+ (double)heightWithParams:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 whiteLoading:(BOOL)a1;
- (id)initWhiteLoadingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setM_textColor:(id)a0;
- (void)useMMSettingStyle;
- (id)getTerminatorViewParams;
- (void)resetStatus:(unsigned long long)a0;
- (unsigned long long)getStatus;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)a0 subTitle:(id)a1;
- (void)onStateOfNoMoreData:(id)a0;
- (void)genStandardTerminatorViewWithTip:(id)a0;
- (void)setM_customizedBlankView:(id)a0;
- (void)onStateOfNoData:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)terminatorViewDidClickSubtitle;
- (void).cxx_destruct;

@end

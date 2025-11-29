@class UIColor, MMUIActivityIndicatorView, NSString, UIFont, UILabel, UIView, MMTerminatorViewParams;

@interface WCTimeLineFooterView : MMRefreshTableFooterView

@property (retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicatorView;
@property (retain, nonatomic) UILabel *m_label;
@property (retain, nonatomic) UIView *m_endView;
@property (retain, nonatomic) UIView *m_customizedBlankView;
@property (nonatomic) double m_lineViewWidth;
@property (nonatomic) double m_lineViewHeight;
@property (retain, nonatomic) UIColor *m_lineColor;
@property (retain, nonatomic) NSString *m_normalText;
@property (retain, nonatomic) NSString *m_loadingText;
@property (retain, nonatomic) UIColor *m_textColor;
@property (retain, nonatomic) UIFont *m_textFont;
@property (nonatomic) BOOL m_centerAlignLabel;
@property (nonatomic) BOOL m_labelSingleLine;
@property (nonatomic) BOOL m_enabledAfterRefreshing;
@property (nonatomic) BOOL m_labelNewLineBreakRules;
@property (retain, nonatomic) MMTerminatorViewParams *params;

+ (double)defaultHeightWithWidth:(double)a0;
+ (double)heightWithParams:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 whiteLoading:(BOOL)a1;
- (id)initWhiteLoadingWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)useMMSettingStyle;
- (id)getTerminatorViewParams;
- (void)resetStatus:(unsigned long long)a0;
- (unsigned long long)getStatus;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)a0;
- (void)genStandardTerminatorViewWithTip:(id)a0;
- (void)onStateOfNoData:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

@class UIColor, UIFont, UIButton, NSString, AWEUILoadingView, NSMutableDictionary, YYLabel;

@interface AWEFeedRefreshFooter : AWERefreshFooter <IESIMRichRefreshFooterProtocol>

@property (nonatomic) BOOL needBounces;
@property (nonatomic) BOOL forbidTriggerLoadMore;
@property (nonatomic) BOOL triggerAtTracking;
@property (nonatomic) double mj_footerTopPadding;
@property (nonatomic) BOOL blackBackground;
@property (nonatomic) BOOL hideNoMoreText;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *textFont;
@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (retain, nonatomic) NSMutableDictionary *stateAttributedTitles;
@property (nonatomic) BOOL blackBackground;
@property (nonatomic) BOOL hideNoMoreText;
@property (nonatomic) BOOL adaptiveFontEnable;
@property (nonatomic) BOOL scaleCurveLinearConvergenceMiddleEnabled;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *textFont;
@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) UIButton *button;

@end

@class NSString, NSDictionary, AWESearchInnerGuideRelatedRecommendModel, UILabel, UIView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWESearchInnerGuideRelatedRecommendView : UIView <AWESearchUserGuideViewProtocol>

@property (nonatomic) BOOL hasInterAction;
@property (retain, nonatomic) AWESearchInnerGuideRelatedRecommendModel *model;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *arrowLOTView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *keyword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)addCount;
- (void)dismissWithClick:(BOOL)a0;
- (void)showInSuperView:(id)a0 animation:(BOOL)a1;
- (void)trackGuideViewShow;
- (BOOL)isSameWeekWithFirstDate:(id)a0 secondDate:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

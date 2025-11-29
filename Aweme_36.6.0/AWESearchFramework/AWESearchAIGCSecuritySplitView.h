@class UILabel, AWESearchAIGCSecuritySplitModel;

@interface AWESearchAIGCSecuritySplitView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) AWESearchAIGCSecuritySplitModel *model;
@property (retain, nonatomic) UILabel *tipsLabel;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)themeChange;
- (void)addNotification;
- (void)componentWillDisplay;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)createUI;

@end

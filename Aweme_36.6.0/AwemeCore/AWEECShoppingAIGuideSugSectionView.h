@class AWEECShoppingAIGuideContext, NSString, UIImageView, AWEECShoppingGuideSUGModel, UILabel, AWEECShoppingGuideInputSugModel, UIView;

@interface AWEECShoppingAIGuideSugSectionView : UIView

@property (retain, nonatomic) UILabel *sugLabel;
@property (retain, nonatomic) AWEECShoppingGuideInputSugModel *sectionInputSugModel;
@property (copy, nonatomic) NSString *rawQueryString;
@property (retain, nonatomic) UIImageView *sugImgView;
@property (retain, nonatomic) UIView *imageArrowTouchView;
@property (nonatomic) long long sectionIndex;
@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (retain, nonatomic) AWEECShoppingGuideSUGModel *data;

- (void)labelOnTouchAction;
- (void)arrowOnTouchAction;
- (void)updateLabelContent:(id)a0 targetString:(id)a1 withIndex:(long long)a2 withKeywords:(id)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)setupUI;

@end

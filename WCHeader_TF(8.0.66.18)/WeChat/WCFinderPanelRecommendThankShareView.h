@class WCFinderPanelRecommendThankShareViewModel, NSString, WCFinderThanksButton, UILabel, UIView;

@interface WCFinderPanelRecommendThankShareView : UIView <WCFinderThanksButtonDelegate>

@property (retain, nonatomic) WCFinderPanelRecommendThankShareViewModel *model;
@property (copy, nonatomic) id /* block */ onTap;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *shareTipsLabel;
@property (retain, nonatomic) UIView *divider;
@property (retain, nonatomic) WCFinderThanksButton *thanksButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)updateWithModel:(id)a0 onTap:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateModel:(id)a0;
- (void)onThanksButtonClickedWithThanksState:(BOOL)a0;
- (id)_getTextLabel;
- (void).cxx_destruct;

@end

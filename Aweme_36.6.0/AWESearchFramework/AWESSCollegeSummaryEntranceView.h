@class UIImageView, AWESSCollegeSummaryEntranceDataModel, UILabel, UIView, UIButton;
@protocol AWESSCollegeSummaryEntranceViewDelegate;

@interface AWESSCollegeSummaryEntranceView : UIView

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *normalLabel;
@property (retain, nonatomic) UILabel *expandedLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWESSCollegeSummaryEntranceDataModel *model;
@property (weak, nonatomic) id<AWESSCollegeSummaryEntranceViewDelegate> delegate;

- (void)awe_themeDidChange:(long long)a0;
- (void)performUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)transitionToState:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 state:(unsigned long long)a1;
- (void)touchedUpInsideActionButton:(id)a0;
- (void)touchedUpInsideCloseButton:(id)a0;
- (void)reloadWebImages;
- (void)prepareTransitioningFromState:(unsigned long long)a0 toState:(unsigned long long)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)completeTransitioningToState:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)animateTransitioningFromState:(unsigned long long)a0 toState:(unsigned long long)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)layoutSubviewsForState:(unsigned long long)a0 contentSize:(struct CGSize { double x0; double x1; })a1 boundingSize:(struct CGSize { double x0; double x1; })a2;
- (void)layoutSubviewsForCurrentState;
- (id)currentURLForLightURLString:(id)a0 darkURLString:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end

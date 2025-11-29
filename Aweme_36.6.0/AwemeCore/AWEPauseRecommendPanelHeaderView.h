@class NSString, UIImageView, UILabel, UIButton;

@interface AWEPauseRecommendPanelHeaderView : UIView <AWERelatedRecommendPanelCustomHeaderProtocol>

@property (retain, nonatomic) UILabel *foldTitleLabel;
@property (retain, nonatomic) UILabel *expandedTitleLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) double panelHeaderHeight;
@property (copy, nonatomic) id /* block */ didTapCloseButton;
@property (copy, nonatomic) id /* block */ themeColorDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pauseShowRelateConfigDict;

- (void)didTapClose;
- (void)updateCloseButtonConstraintsWithTopPadding:(double)a0;
- (void)updateFoldedTitleConstraintsWithTopPadding:(double)a0;
- (void)updatePanelState:(BOOL)a0;
- (void).cxx_destruct;
- (double)headerHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

@class UILabel, WCFinderPanelTipsBubbleViewReportModel;

@interface WCFinderPanelTipsBubbleView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) WCFinderPanelTipsBubbleViewReportModel *reportModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)updateWithTips:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configReport;
- (void).cxx_destruct;

@end

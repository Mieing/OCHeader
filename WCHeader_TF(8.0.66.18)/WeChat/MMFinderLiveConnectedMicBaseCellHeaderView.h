@class NSString, MMFinderLiveConnectedMicCellHeaderViewAction, UIView, UILabel, MMUIButton;

@interface MMFinderLiveConnectedMicBaseCellHeaderView : UIView

@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) UIView *bottomSeparatorLine;
@property (nonatomic) double titleLabelFrameX;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) MMFinderLiveConnectedMicCellHeaderViewAction *action;
@property (nonatomic) BOOL showSeparatorBar;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetState;
- (void)layoutSubviews;
- (void)configTitleLabel;
- (void)layoutUI;
- (void)updateWithTitle:(id)a0;
- (void)configSearchButton;
- (void)onTapSearchButton;
- (void)layoutSearchButton;
- (void).cxx_destruct;

@end

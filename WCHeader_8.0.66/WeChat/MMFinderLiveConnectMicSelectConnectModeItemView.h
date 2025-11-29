@class UILabel, UIImageView, UIView;

@interface MMFinderLiveConnectMicSelectConnectModeItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIImageView *selectedIconView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configAllSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithTitle:(id)a0;
- (void)updateSelectedIconHidden:(BOOL)a0;
- (void)toggle;
- (void)unToggle;
- (void).cxx_destruct;

@end

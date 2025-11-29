@class UILabel, BDSCLocalCastOptionView, UIView;

@interface BDSCSearchDeviceTitleView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *customBgView;
@property (retain, nonatomic) BDSCLocalCastOptionView *localCastView;

- (void)loadLocalCastViewIfNeeded;
- (void)updateCustomView:(BOOL)a0 isLandscape:(BOOL)a1;
- (void)updateTitleFontSize:(double)a0 bottomMarginLayout:(double)a1;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)updateTitle:(id)a0;

@end

@class UILabel, MMWebImageView;

@interface WCTemplateNotifyActionHeaderView : UIView

@property (retain, nonatomic) MMWebImageView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)createWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconUrl:(id)a1 title:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconUrl:(id)a1 title:(id)a2;
- (void)setIconUrl:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

@class UILabel, MMWebImageView;

@interface WCFinderPopupTipsView : MMUIView

@property (nonatomic) double rawWidth;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMWebImageView *iconUrlImageView;
@property (nonatomic) BOOL isMainStatus;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTextColor:(id)a0 bgColorString:(id)a1;
- (void)updateWithShowInfoItem:(id)a0 isMain:(BOOL)a1;
- (void)layoutAllTipsViews:(BOOL)a0;
- (void).cxx_destruct;

@end

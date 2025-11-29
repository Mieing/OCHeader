@class UIButton, AWELeftSideBarDynamicItemHighValueAppModel, DUXBaseImageView, UILabel;

@interface AWELeftSideBarRecentVisitMicroAppBannerCell : UICollectionViewCell

@property (retain, nonatomic) AWELeftSideBarDynamicItemHighValueAppModel *model;
@property (copy, nonatomic) id /* block */ clickAction;
@property (weak, nonatomic) DUXBaseImageView *iconView;
@property (weak, nonatomic) UILabel *mainTitleLabel;
@property (weak, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) UIButton *jumpButton;

+ (double)iconViewSize;
+ (double)cellHeight;

- (void)trackImageLoadPerfWithParams:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

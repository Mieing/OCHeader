@class MMUILabel, UIView;

@interface MMFinderLiveWeakNetBannerDetailView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitle1Label;
@property (retain, nonatomic) MMUILabel *subdetail1Label;
@property (retain, nonatomic) MMUILabel *subtitle2Label;
@property (retain, nonatomic) MMUILabel *subdetail2Label;
@property (retain, nonatomic) MMUILabel *recoverTitleLabel;
@property (retain, nonatomic) MMUILabel *recoverDetailLabel;
@property (copy, nonatomic) id /* block */ gotoMoreFuncBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onGoSettingLabelClicked;
- (void).cxx_destruct;

@end

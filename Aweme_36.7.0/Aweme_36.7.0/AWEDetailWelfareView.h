@class AWEDetailWelfareDonateInfoView, UIImageView, UILabel, UIView, AWEWelfareActivityModel;
@protocol AWEDetailWelfareTrackDelegate, AWEDetailWelfareViewDelegate;

@interface AWEDetailWelfareView : UIView

@property (retain, nonatomic) AWEWelfareActivityModel *model;
@property (weak, nonatomic) id<AWEDetailWelfareViewDelegate> delegate;
@property (weak, nonatomic) id<AWEDetailWelfareTrackDelegate> tracker;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *projectNameLabel;
@property (retain, nonatomic) UIImageView *projectArrowImageView;
@property (retain, nonatomic) UILabel *projectDescriptionLabel;
@property (retain, nonatomic) AWEDetailWelfareDonateInfoView *donateInfoView;

- (void)updateToModel:(id)a0;
- (void)p_updateProjectNameLabelWithModel:(id)a0;
- (void)p_updateDescriptionLabelWithModel:(id)a0 welfareViewTotalHeight:(double *)a1;
- (void)p_updateDonateInfoViewWithModel:(id)a0 welfareViewTotalHeight:(double *)a1;
- (void)clickedWelfareView:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

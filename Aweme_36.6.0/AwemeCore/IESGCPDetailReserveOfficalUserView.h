@class IESGCPDetailFansGroupStyleView, UILabel, UIView, IESGCPDynamicHandleEventButton;

@interface IESGCPDetailReserveOfficalUserView : IESGCPDetailBaseView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) IESGCPDetailFansGroupStyleView *styleView;
@property (retain, nonatomic) UILabel *sectionTitleLabel;
@property (retain, nonatomic) IESGCPDynamicHandleEventButton *questionButton;

- (void)bindViewModel:(id)a0;
- (void)jumpToProfile;
- (void)showAccountQuestion;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end

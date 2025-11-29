@class NSString, UIImageView, UIView, UILabel, UIButton;

@interface IESGCPDetailTitleBarInfoView : IESGCPDetailBaseView <IESGCPDIContextSubscriber>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *gameInfoContainerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *gameStatusIcon;
@property (nonatomic) BOOL useBackIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)setContainerViewAlpha:(double)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)didTapCloseButton;

@end

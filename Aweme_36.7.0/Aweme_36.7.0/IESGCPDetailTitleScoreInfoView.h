@class IESGCPImageButton, NSString, UIView;

@interface IESGCPDetailTitleScoreInfoView : IESGCPDetailBaseView <IESGCPDIContextSubscriber>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESGCPImageButton *scoreLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)setupV4ScoreInfoView;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end

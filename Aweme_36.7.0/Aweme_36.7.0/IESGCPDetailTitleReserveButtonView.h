@class UIButton, NSString;

@interface IESGCPDetailTitleReserveButtonView : IESGCPDetailBaseView <IESGCPGameDetailReserveStatusActions, IESGCPDIContextSubscriber>

@property (retain, nonatomic) UIButton *reserveButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)didTapActionButton:(id)a0;
- (void)reservedStatusDidChanged:(unsigned long long)a0;
- (unsigned long long)reserveButtonStatusWithIsReserved:(BOOL)a0;
- (void)configButtonStateWithThemeConfig:(id)a0;
- (void)trackReserveGameTopRightButtonClick:(id)a0;
- (void)handleCannelReserveGameEventWithFullScreen:(BOOL)a0;
- (void)handleReserveGameEventWithFullScreen:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end

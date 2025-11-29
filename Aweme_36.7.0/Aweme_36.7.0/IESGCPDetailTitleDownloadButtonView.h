@class UIButton, NSString;

@interface IESGCPDetailTitleDownloadButtonView : IESGCPDetailBaseView <IESGCPDIContextSubscriber>

@property (retain, nonatomic) UIButton *downloadButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didSetGameCPDIContext;
- (void)didTapActionButton:(id)a0;
- (void)trackAppTopRightButtonClick:(id)a0 appDidDownload:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end

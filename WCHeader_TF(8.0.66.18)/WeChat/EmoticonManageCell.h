@class EmoticonManageDataObject, NSString, MMProgressView, UILabel, MMWebImageView, UIButton;
@protocol EmoticonManageCellDelegate;

@interface EmoticonManageCell : MMUIView <IEmoticonPackageMgrExt, IEmoticonPackageStateMgrExt, EmoticonManageViewControllerModeExt>

@property (retain, nonatomic) MMWebImageView *m_iconImageView;
@property (retain, nonatomic) UIButton *m_unstallButton;
@property (retain, nonatomic) UIButton *m_downloadButton;
@property (retain, nonatomic) UILabel *m_nameLabel;
@property (retain, nonatomic) MMProgressView *m_progressView;
@property (weak, nonatomic) id<EmoticonManageCellDelegate> m_delegate;
@property (retain, nonatomic) EmoticonManageDataObject *dataObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCellDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)cellSeparatorLeftInset;
- (void)onState:(long long)a0;
- (void)checkMode;
- (void)onClickDownloadButton;
- (void)onClickUnstallButton;
- (void)OnDownloadProgressChanged:(id)a0 CurrLength:(unsigned long long)a1 TotalLength:(unsigned long long)a2;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)a0 IsDownloaded:(BOOL)a1;
- (void)OnUpdateEmoticonPackageState:(id)a0 toState:(long long)a1;
- (void)onGotoNormalMode;
- (void)onGotoDeleteMode;
- (void).cxx_destruct;

@end

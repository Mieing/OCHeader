@class MMUIActivityIndicatorView, UIImageView, NSString, UIView;

@interface EmoticonAsyncUploadView : EmoticonViewWithPreview <EmoticonBackupOperateMgrExt>

@property (nonatomic) unsigned long long m_uploadStatus;
@property (retain, nonatomic) UIView *m_maskView;
@property (retain, nonatomic) UIImageView *m_uploadFailedView;
@property (retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 EmoticonWrap:(id)a1;
- (void)initView;
- (void)setUploadStatus:(unsigned long long)a0;
- (void)changeWrap:(id)a0 needShowDesc:(BOOL)a1;
- (void)showPreview;
- (void)hidePreview;
- (void)showFocusView;
- (void)hideFocusView;
- (void)onAddBackupEmoticonPendingUpload:(id)a0;
- (void)onAddBackupEmoticonFailed:(id)a0 reason:(unsigned long long)a1 remoteErrMsg:(id)a2;
- (void).cxx_destruct;

@end

@class ACCPicTemplateModel, UIImageView, NSString, UILabel, UIView;

@interface ACCPicTemplatePanelThumbnailViewCell : UICollectionViewCell <ACCPicTemplateDownloadObserverProtocol>

@property (retain, nonatomic) UIImageView *templateImageView;
@property (retain, nonatomic) UILabel *templateNameLabel;
@property (retain, nonatomic) UIImageView *downloadingView;
@property (nonatomic) unsigned long long downloadStatus;
@property (retain, nonatomic) ACCPicTemplateModel *template;
@property (retain, nonatomic) UIView *applyRetryView;
@property (retain, nonatomic) UIImageView *applyRetryIconView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createRotationAnimation;
- (void)stopDownloadAnimation;
- (void)startDownloadAnimation;
- (void)didBeginDownloadPicTemplate:(id)a0;
- (void)didFinishDownloadPicTemplate:(id)a0;
- (void)didFailDownloadPicTemplate:(id)a0 withError:(id)a1;
- (void)DidChangePrefetchToNormalTemplate:(id)a0;
- (void)needUpdateCellDownloadTemplate:(id)a0;
- (void)configHighlightWithSelected:(BOOL)a0;
- (void)shouldShowRetry:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)configWithTemplate:(id)a0;

@end

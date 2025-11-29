@class NSString, UIImageView, SightIconView, UIView, UILabel, YYAsyncImageView;

@interface GCImageCell : GCChatBaseCell <IDownloadImageExt, IMessageWrapImgExt> {
    YYAsyncImageView *m_imageView;
    UIImageView *m_imageDownloadFailView;
    UIImageView *m_imageLoadingBackgroundView;
    SightIconView *m_imageLoadingView;
    UIImageView *m_icloudImageIcon;
    UIImageView *m_icloudBackground;
    UILabel *m_icloudLabel;
    UIView *m_imageMaskView;
}

@property (retain, nonatomic) UIView *imgContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onCalculatLayoutInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithCellModel:(id)a0;
- (id)bindImgCellModel;
- (id)imgMsgWrapper;
- (void)initImageView;
- (id)getCoverImage;
- (void)handleUpload;
- (void)handleIcloudPointProgress:(int)a0;
- (void)handleDownload;
- (void)updateStatus;
- (void)addDownloadFailView;
- (void)startLoading;
- (void)startLoadingWithUseProgress:(BOOL)a0;
- (void)stopLoading;
- (void)addICloudIcon;
- (void)removeICloudIcon;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end

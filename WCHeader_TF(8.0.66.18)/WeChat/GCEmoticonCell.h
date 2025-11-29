@class NSString, MMEmoticonView, UIImageView, UILabel, MMUIActivityIndicatorView;

@interface GCEmoticonCell : GCChatBaseCell <IStoreEmotionSingleDownloadMgrExt> {
    UILabel *m_downloadFailRetryLabel;
    UIImageView *m_downloadFailedImageView;
    MMUIActivityIndicatorView *m_imageLoadingView;
}

@property (retain, nonatomic) MMEmoticonView *emoticonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onCalculatLayoutInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateEmoticonView;
- (void)updateStatus;
- (void)showLoadingView;
- (void)showDownloadFailView;
- (id)emoticonCellModel;
- (void)configureWithCellModel:(id)a0;
- (void).cxx_destruct;

@end

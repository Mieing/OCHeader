@class VideoReaderMessageViewModel, NSString, CAGradientLayer, SightIconView, UIView, UILabel;

@interface VideoReaderMessageCellView : ReaderMessageCellView <MMWebImageViewDelegate> {
    UIView *m_playIconTimeContainerView;
    SightIconView *m_playIconView;
    UILabel *m_timeLabel;
    CAGradientLayer *m_titleShadowLayer;
    BOOL m_bIsCoverImgViewFinishLoad;
}

@property (readonly, nonatomic) VideoReaderMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)setupContentView;
- (void)setupCoverImageView;
- (void)setupTitleView;
- (void)setupPlayIconTimeContainerView;
- (void)updateSubviewsWhenCoverImgViewFinishLoad;
- (id)getLabelTextColor;
- (void)onLoadImageOK:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void).cxx_destruct;

@end

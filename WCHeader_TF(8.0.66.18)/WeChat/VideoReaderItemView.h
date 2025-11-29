@class CAGradientLayer, NSString, SightIconView, UIView, MMUILabel;

@interface VideoReaderItemView : ReaderItemView <MMWebImageViewDelegate> {
    UIView *m_playIconTimeContainerView;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
    CAGradientLayer *m_titleShadowLayer;
    BOOL m_bIsCoverImgViewFinishLoad;
}

@property (nonatomic) unsigned int playLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)topView;
- (void)normalView;
- (void)initCoverImageView;
- (void)setupTitleView;
- (void)setupPlayIconTimeContainerView;
- (void)setupPlayIconView:(BOOL)a0;
- (void)updateSubviewsWhenCoverImgViewFinishLoad;
- (id)getLabelTextColor;
- (void)onLoadImageOK:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end

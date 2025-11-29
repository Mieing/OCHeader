@class AWEVideoImageGenerator, AWECoverChooseBottomTitleCollectionView, UIImage, UILabel, AWECoverChooseBottomTabTitleView, AWEVideoCoverTextEffectsView, UIImpactFeedbackGenerator, AWECoverChooseBottomViewModel, NSNumberFormatter, UIView, NSString, AWEVideoPublishViewModel, AWECoverTextEffectsViewModel, NSNumber, AWECoverChooseBottomAlbumSliderView, NSArray, AWEVideoCoverImageSliderView, UIImageView;
@protocol ACCTextLoadingViewProtcol, ACCSequenceEditServiceProtocol, AWECoverChooseBottomViewDelegate, ACCEditServiceProtocol;

@interface AWECoverChooseBottomView : UIView <AWEVideoCoverImageSliderViewDelegate, AWECoverChooseBottomTabTitleViewDelegate, AWECoverChooseBottomTitleCollectionViewDelegate, AWECoverChooseBottomAlbumSliderViewDelegate, AWEVideoCoverTextEffectsViewDelegate>

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) AWEVideoCoverImageSliderView *sliderView;
@property (retain, nonatomic) AWECoverChooseBottomAlbumSliderView *albumSliderView;
@property (retain, nonatomic) UIView *previewSnapshotView;
@property (retain, nonatomic) UIView *sliderBackgroundView;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (retain, nonatomic) AWECoverChooseBottomTabTitleView *tabView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEVideoCoverTextEffectsView *effectsView;
@property (retain, nonatomic) AWECoverChooseBottomTitleCollectionView *titlesView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) AWEVideoImageGenerator *imageGenerator;
@property (retain, nonatomic) AWECoverTextEffectsViewModel *viewModel;
@property (retain, nonatomic) UIImage *firstFrameImage;
@property (retain, nonatomic) NSNumber *totalVideoDuration;
@property (nonatomic) double finalChoosePercent;
@property (retain, nonatomic) UIView *AICoverBubbleView;
@property (retain, nonatomic) UIView *whitePointView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) AWECoverChooseBottomViewModel *bottomViewModel;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (copy, nonatomic) NSString *trackTextIdString;
@property (nonatomic) BOOL isSlides;
@property (weak, nonatomic) id<AWECoverChooseBottomViewDelegate> delegate;
@property (readonly, nonatomic) UIView *controlContentView;
@property (readonly, nonatomic) NSArray *cellModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (BOOL)titleCollectionView:(id)a0 shouldSelectItem:(id)a1;
- (void)titleCollectionView:(id)a0 didSelectIndex:(long long)a1 item:(id)a2;
- (void)titleCollectionView:(id)a0 willDisplayIndex:(long long)a1 item:(id)a2;
- (id)titleModelWithTitle:(id)a0;
- (id)p_commonTrackParams;
- (void)p_configSubViews;
- (double)dynamicCoverStartTimePercent;
- (void)p_reloadPreviewFrames:(id /* block */)a0;
- (void)p_loadFirstPreviewFrameWithCompletion:(id /* block */)a0;
- (void)p_trackCoverClick;
- (void)coverImageSliderView:(id)a0 touchBegin:(double)a1;
- (void)coverImageSliderView:(id)a0 touchMoved:(double)a1;
- (void)coverImageSliderView:(id)a0 touchEnd:(double)a1;
- (void)sliderViewShowImages;
- (void)bottomAlbumSliderView:(id)a0 didSelectIndex:(long long)a1;
- (void)tabTitleView:(id)a0 didSelectType:(long long)a1;
- (void)tabTitleViewDidTapReset:(id)a0;
- (void)p_touchEnd:(double)a0;
- (void)updateAICoverWhitePoint;
- (double)sliderViewTop;
- (double)recommendedAICoverTimePercent;
- (void)p_updateWithType:(long long)a0;
- (void)setPreviewSnapshotViewEnabled:(BOOL)a0;
- (BOOL)p_isAtRecommendedFrameRange:(double)a0;
- (void)p_trackSelectCoverTextType:(id)a0;
- (BOOL)p_isEffectCellModelValid:(id)a0;
- (BOOL)effectsViewShouldSelectCellModel:(id)a0;
- (void)effectsViewdDidSelectCellModel:(id)a0;
- (id)initWithViewModel:(id)a0 publishModel:(id)a1 editService:(id)a2 sequenceEditService:(id)a3 fontScale:(double)a4;
- (void)configThumbPlaceholderImage:(id)a0;
- (void)dismissAICoverBubble;
- (void)startFetchEffectsWithCompletion:(id /* block */)a0;
- (long long)currentAlbumIndex;
- (void).cxx_destruct;
- (void)loadDataIfNeeded;

@end

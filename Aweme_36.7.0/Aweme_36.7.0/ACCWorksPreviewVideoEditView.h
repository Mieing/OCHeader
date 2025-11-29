@class UIView, ACCButton, NSURL, AVURLAsset, NSString, AWEVideoRangeSlider, UICollectionView, ACCThumbnailDataSource, UILabel, ACCAnimatedButton;
@protocol ACCCutSameStyleCropEditManagerProtocol;

@interface ACCWorksPreviewVideoEditView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, ACCCutSameWorksPreviewBottomViewProtocol>

@property (retain, nonatomic) AWEVideoRangeSlider *videoRangeSlider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bottomInfoLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) ACCButton *changeMaterialButton;
@property (retain, nonatomic) UIView *videoCropContainerView;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) ACCAnimatedButton *okButton;
@property (retain, nonatomic) UIView *toolbarBgView;
@property (retain, nonatomic) UICollectionView *framesCollectionView;
@property (retain, nonatomic) ACCThumbnailDataSource *thumbnailDataSource;
@property (retain, nonatomic) UIView *framesCollectionLeftMaskView;
@property (retain, nonatomic) UIView *framesCollectionRightMaskView;
@property (weak, nonatomic) id<ACCCutSameStyleCropEditManagerProtocol> editManager;
@property (nonatomic) long long curType;
@property (copy, nonatomic) NSURL *imageFileURL;
@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) double prepareWidth;
@property (copy, nonatomic) id /* block */ pauseCallback;
@property (copy, nonatomic) id /* block */ resumeCallback;
@property (copy, nonatomic) id /* block */ changeRangeCallback;
@property (copy, nonatomic) id /* block */ changeMaterialCallback;
@property (copy, nonatomic) id /* block */ okCallback;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (copy, nonatomic) id /* block */ scrollCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePlayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)currentViewHeight;
- (void)onCloseAction:(id)a0;
- (void)onOkAction:(id)a0;
- (void)onChangeMaterialAction:(id)a0;
- (void)AnimationForShowCropView;
- (void)AnimationForHideCropView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)reset;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end

@class NSString, WCFinderRedPacketCropFrameView, UICollectionView, WCFinderRedPacketCropSliderModel;
@protocol WCFinderRedPacketCropSliderViewDelegate;

@interface WCFinderRedPacketCropSliderView : MMUIView <WCFinderRedPacketCropSliderModelDelegate, UICollectionViewDataSource, WCFinderRedPacketCropFrameViewDelegate, UICollectionViewDelegate>

@property (retain, nonatomic) WCFinderRedPacketCropSliderModel *sliderModel;
@property (retain, nonatomic) WCFinderRedPacketCropFrameView *cropFrameView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long minSeconds;
@property (nonatomic) long long maxSeconds;
@property (weak, nonatomic) id<WCFinderRedPacketCropSliderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoURL:(id)a1 minSeconds:(long long)a2 maxSeconds:(long long)a3;
- (void)setUpView;
- (void)loadAvAssetInfo;
- (struct CGSize { double x0; double x1; })getShareSize;
- (void)layoutAllSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)onCropSliderPanViewRangeChanged:(long long)a0;
- (id)getCurCropVideoTimeRange;
- (void)updateCollectionViewInset;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end

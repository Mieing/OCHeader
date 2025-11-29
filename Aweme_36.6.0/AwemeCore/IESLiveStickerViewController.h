@class HTSEventContext, IESLiveStickerItemNewModel, UIView, UITapGestureRecognizer, NSString, IESLiveStickerTopTabView, IESLiveStickerNewModel, UICollectionView, NSIndexPath;
@protocol IESLiveRoomService, IESLivePerfSampler, IESLiveStickerViewControllerDelegate;

@interface IESLiveStickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) IESLiveStickerTopTabView *topTabView;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) UITapGestureRecognizer *dismissTapGesture;
@property (nonatomic) BOOL hasTextStickers;
@property (nonatomic) BOOL hasImageStickers;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) double appearTime;
@property (retain, nonatomic) NSIndexPath *selectedTextIndex;
@property (retain, nonatomic) NSIndexPath *selectedImageIndex;
@property (nonatomic) BOOL hasSelected;
@property (retain, nonatomic) UIView *accessView;
@property (retain, nonatomic) UITapGestureRecognizer *tapAccessGesture;
@property (retain, nonatomic) IESLiveStickerNewModel *stickerModel;
@property (retain, nonatomic) IESLiveStickerItemNewModel *textStickerModel;
@property (retain, nonatomic) IESLiveStickerItemNewModel *imageStickerModel;
@property (weak, nonatomic) id<IESLiveStickerViewControllerDelegate> delegate;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) long long lastUsedStickerType;
@property (retain, nonatomic) UICollectionView *textStickerCollectionView;
@property (retain, nonatomic) UICollectionView *imageStickerCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 animated:(BOOL)a1;
- (void)showOnView:(id)a0 initialLayoutBlock:(id /* block */)a1 targetLayoutBlock:(id /* block */)a2 animated:(BOOL)a3;
- (void)_layoutBaseView:(BOOL)a0;
- (void)_addMaskToBaseView;
- (void)_layoutBaseViewSubViews;
- (void)ies_setupDismissGesture;
- (void)ies_handleDismissTapGesture:(id)a0;
- (void)_onTextTabTapped;
- (void)_onImageTabTapped;
- (void)_showStickerPanelWithType:(long long)a0;
- (void)_trackStickerPanelShowEventWithType:(long long)a0;
- (id)stickerCollectionViewCreator;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (id)initWithRoom:(id)a0;

@end

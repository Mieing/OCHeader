@class AWEKaraokeEffectEditViewModel, NSArray, UICollectionView, NSString, UILabel, AWEKaraokeEffectEditItemView, UIButton;
@protocol AWEKaraokeEffectEditDelegate;

@interface AWEKaraokeEffectEditViewController : ACCStickerPannelAnimationVC <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *recommendVolumeBtn;
@property (retain, nonatomic) AWEKaraokeEffectEditItemView *vocalView;
@property (retain, nonatomic) AWEKaraokeEffectEditItemView *accompanyView;
@property (retain, nonatomic) AWEKaraokeEffectEditItemView *vocalAlignView;
@property (retain, nonatomic) UICollectionView *effectCollectionView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (copy, nonatomic) NSArray *soundEffects;
@property (retain, nonatomic) AWEKaraokeEffectEditViewModel *viewModel;
@property (weak, nonatomic) id<AWEKaraokeEffectEditDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)p_didClickRecommendBtn;
- (void)setupVocalVolumeSlider;
- (void)setupAccompanyVolumeSlider;
- (void)setupVocalAlignSlider;
- (void)setupEffectSoundCollectionView;
- (void)fetchSoundEffects;
- (void)p_editRecommendBtn:(BOOL)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end

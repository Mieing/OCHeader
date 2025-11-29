@class NSString, UICollectionView, UILabel, NSMutableArray, UIView;
@protocol IESLiveEffectPlatformService, IESLiveSoundEffectViewReaction;

@interface IESLiveSoundEffectPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableArray *soundList;
@property (nonatomic) unsigned long long curIndex;
@property unsigned long long toSelectIndex;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIView *tipsViewRoot;
@property (retain, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;
@property (weak, nonatomic) id<IESLiveSoundEffectViewReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelectIndex:(unsigned long long)a0;
- (void)updateTitleLabelText:(id)a0;
- (void)addTitleLabel;
- (void)addCollectionView;
- (void)updateDataList:(id)a0 selected:(id)a1;
- (void)addContailerView;
- (void)showLongPressTipsAt:(id)a0;
- (void)selectSpecificEffectForCell:(id)a0 ofIndex:(unsigned long long)a1;
- (void)setAuditionEffectEnable:(BOOL)a0 longPress:(id)a1;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;

@end

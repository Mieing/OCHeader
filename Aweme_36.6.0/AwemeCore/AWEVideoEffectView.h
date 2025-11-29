@class UIView, NSString, NSArray, AWEVideoPublishViewModel, IESEffectModel, UICollectionView, UILabel, ACCButton;
@protocol ACCLoadingViewProtocol, AWEVideoEffectViewDelegate;

@interface AWEVideoEffectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) ACCButton *revokeBtn;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) NSArray *timeEffects;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSString *effectCategory;
@property (retain, nonatomic) IESEffectModel *selectedToolEffect;
@property (nonatomic, getter=isLongPressing) BOOL longPressing;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) id<AWEVideoEffectViewDelegate> delegate;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL hideEffectCategoryMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)generateLightImpact;
- (id)effectCategoryTitle;
- (void)hideRevokeBtn:(BOOL)a0;
- (void)selectTimeEffect:(long long)a0;
- (BOOL)hasValidMultiVoiceEffectSegment;
- (void)updateCellWithTimeEffect:(long long)a0;
- (void)p_stopLoadingAnim;
- (id)initWithType:(unsigned long long)a0 effects:(id)a1 effectCategory:(id)a2 publishModel:(id)a3;
- (void)selectToolEffectWithEffectId:(id)a0 animated:(BOOL)a1;
- (void)p_startLoadingAnim;
- (void)didClickedRevokeBtn:(id)a0;
- (void)updateCellWithEffect:(id)a0;
- (void)resetToolEffectTip;
- (void)deselectToolEffectWithEffectId:(id)a0;
- (void)setUpScalableRangeViewTip:(double)a0;
- (void)configCell:(id)a0 withEffect:(id)a1;
- (BOOL)effectCoverNeedReduce;
- (id)staticImageWithImage:(id)a0;
- (void)longPressedAnimationStart:(id)a0;
- (void)configTimeCell:(id)a0 withSelectedStatus:(BOOL)a1;
- (long long)findToolEffectWithEffectId:(id)a0;
- (void)configVideoEffectRevokeButton:(id)a0;
- (void)updateWithType:(unsigned long long)a0 effects:(id)a1 effectCategory:(id)a2;
- (void).cxx_destruct;
- (void)reload;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setDescriptionText:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)endLongPress:(id)a0;

@end

@class NSArray, UICollectionView, MMUIView, NSString, MMFinderLiveKTVAudioEffectSettingUserInfo;

@interface MMFinderLiveKTVAudioReverbSettingCell : WCTableViewNormalCellManager <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) MMFinderLiveKTVAudioEffectSettingUserInfo *customUserInfo;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) NSArray *reverbItems;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getAspectHeightWithContentW:(double)a0 itemCnt:(unsigned long long)a1;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 userInfo:(id)a1 reverbItems:(id)a2;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)a0 height:(double)a1;
- (void)initSubviewsWith:(double)a0 height:(double)a1;
- (void)layoutUI;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)liveTask;
- (void).cxx_destruct;

@end

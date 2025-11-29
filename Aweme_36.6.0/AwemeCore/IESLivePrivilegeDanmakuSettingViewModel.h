@class HTSEventContext, NSArray, IESLivePrivilegeDanmakuTabViewModel, IESLivePrivilegeDanmakuSettingItem, NSString;
@protocol IESLiveRoomService;

@interface IESLivePrivilegeDanmakuSettingViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSArray *danmakuTabViewModels;
@property (retain, nonatomic) IESLivePrivilegeDanmakuTabViewModel *currentSelectedViewModel;
@property (nonatomic) BOOL loadingDanmakuTab;
@property (nonatomic) BOOL isLandscapeMode;
@property (nonatomic) long long style;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingItem *settingItem;
@property (copy, nonatomic) id /* block */ tabViewModelsDidUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomModel:(id)a0 trackContext:(id)a1;
- (void)loadDefaultSelectDanmaku;
- (void)updateDanmakuTabDataWithCompletion:(id /* block */)a0;
- (void)danmakuTabDidShow;
- (void)tr_danmakuTabShow;
- (void)p_updateTabItems:(id)a0;
- (void)updateDanmakuDataCacheWithData:(id)a0;
- (void)danmakuToastDidShow:(id)a0;
- (void)cleanSelectedTab;
- (void)monitor_danmakuTabWithDuration:(double)a0 error:(id)a1;
- (void)tr_danmakuToastShowWithToast:(id)a0;
- (void)p_selectDefaultViewModelWithStyle:(long long)a0;
- (void)p_selectDefaultItemWithStyle:(long long)a0;
- (id)buildCellViewModelsFromItems:(id)a0;
- (BOOL)p_selectDanmakuTabViewModel:(id)a0 fromTap:(BOOL)a1;
- (id)lastCachedTabItems;
- (void)tr_danmakuTabClickWithSuccess:(BOOL)a0 level:(long long)a1 toast:(id)a2;
- (void)p_storeSelectedTabWithTabViewModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reset;

@end

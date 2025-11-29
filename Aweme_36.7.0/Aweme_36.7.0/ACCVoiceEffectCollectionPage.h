@class NSString, ACCVoiceEffectCategoryDataSource, UILabel, NSMutableArray;
@protocol ACCVoiceEffectDataSourceAdapter;

@interface ACCVoiceEffectCollectionPage : UICollectionView <SAMIReuseObjProtocol>

@property (retain, nonatomic) NSMutableArray *cellClzs;
@property (retain, nonatomic) id<ACCVoiceEffectDataSourceAdapter> adapter;
@property (retain, nonatomic) ACCVoiceEffectCategoryDataSource *categorySource;
@property (retain, nonatomic) UILabel *emptyTitleLabel;
@property (nonatomic) long long pageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareToRelease;
- (void)unregistReuseCell;
- (void)registReuseCellUseClzs:(id)a0;
- (void)updateEmptyTitleStatus;
- (void)constructEmptyTitleLabelIfNeeded;
- (void)safeScrollToIndex:(id)a0;
- (void)prepareToReuse;
- (id)reuseIdentify;
- (void)updateCategorySource:(id)a0;
- (void)reloadAndScrollIfNeeded:(id)a0;
- (BOOL)checkCellRegistStatus:(Class)a0;
- (void).cxx_destruct;
- (void)cleanUp;

@end
